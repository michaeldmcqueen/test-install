<?php
/**
 * @file
 * url_and_path_defaults.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function url_and_path_defaults_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
