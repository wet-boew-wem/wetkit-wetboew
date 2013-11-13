<?php
/**
 * @file
 * wetkit_wetboew.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function wetkit_wetboew_defaultconfig_features() {
  return array(
    'wetkit_wetboew' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function wetkit_wetboew_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access wxt mobile'.
  $permissions['access wxt mobile'] = array(
    'name' => 'access wxt mobile',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'wetkit_wetboew',
  );


  return $permissions;
}
