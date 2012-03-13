<?php
/**
 * @file
 * datapublic_datasets.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function datapublic_datasets_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: main-menu:node/81
  $menu_links['main-menu:node/81'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/datasets_page',
    'router_path' => 'node/%',
    'link_title' => 'Datasets',
    'options' => array(
      'attributes' => array(
        'title' => 'Datasets',
      ),
      'langcode' => 'en',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node-name/resources_page',
  );
  // Exported menu link: menu-main-menu-mobile-:node/81
  $menu_links['menu-main-menu-mobile-:node/81'] = array(
    'menu_name' => 'menu-main-menu-mobile-',
    'link_path' => 'node-name/datasets_page',
    'router_path' => 'node/%',
    'link_title' => 'Datasets',
    'options' => array(
      'attributes' => array(
        'title' => 'Datasets',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'node-name/resources_page',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Datasets');


  return $menu_links;
}
