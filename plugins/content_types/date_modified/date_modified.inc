<?php
/**
 * @file
 * Plugin to handle the 'querypath_scrape' content type which allows the
 * pane to be filled with content from an external data source using QueryPath.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Date Modified'),
  'description' => t('This pane will leverage custom tokens to print out a Date Modified string.'),
  'content_types' => array('date_modified'),
  'category' => t('WetKit'),
  'render callback' => 'wetkit_wetboew_date_modified_content_type_render',
  'single' => TRUE,
);

/**
 * Output function for the 'date_modified' content type.
 */
function wetkit_wetboew_date_modified_content_type_render($subtype, $conf, $panel_args) {
  $pane = new stdClass();

  $pane->content = '<div class="datemod"><dl id="wb-dtmd">
  <dt>' .  t('Date modified:') . '</dt>
  <dd><time property="dateModified">' . format_date(time(), 'custom', 'Y-m-d') . '</time></dd>
</dl></div>';

  return $pane;
}
