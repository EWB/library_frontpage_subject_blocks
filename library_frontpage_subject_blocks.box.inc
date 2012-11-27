<?php
/**
 * @file
 * library_frontpage_subject_blocks.box.inc
 */

/**
 * Implements hook_default_box().
 */
function library_frontpage_subject_blocks_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'library_general_sources_links';
  $box->plugin_key = 'simple';
  $box->title = 'General Sources';
  $box->description = 'General Sources Links';
  $box->options = array(
    'body' => array(
      'value' => '<ul><li><a href="./resources/alternative-press">Alternative Press</a></li><li><a href="./resources/business-sources">Business Sources</a></li><li><a href="./resources/general-sources">General Sources</a></li><li><a href="./government-information">Government Information</a></li><li><a href="./resources/news-sources">News Sources</a></li><li><a href="./resources/statistics-data">Statistics and Data</a></li></ul>',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['library_general_sources_links'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'library_humanities_links';
  $box->plugin_key = 'simple';
  $box->title = 'Humanities';
  $box->description = 'Humanities Links';
  $box->options = array(
    'body' => array(
      'value' => '<ul><li><a href="./resources/english">English</a></li><li><a href="./resources/film%20studies">Film Studies</a></li><li><a href="./resources/fine%20arts">Fine Arts</a></li><li><a href="./resources/history">History</a></li><li><a href="./resources/modern%20languages%20and%20literatures">Modern Languages &amp; Literatures</a></li><li><a href="./resources/music">Music</a></li><li><a href="./resources/performance%20and%20communication%20arts">Performance &amp; Communication Arts</a></li><li><a href="./resources/philosophy">Philosophy</a></li><li><a href="./resources/religious%20studies">Religious Studies</a></li></ul>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['library_humanities_links'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'library_interdisciplinary_links';
  $box->plugin_key = 'simple';
  $box->title = 'Interdisciplinary';
  $box->description = 'Interdisciplinary Links';
  $box->options = array(
    'body' => array(
      'value' => '<ul><li><a href="./resources/african%20studies">African Studies</a></li><li><a href="./resources/asian%20studies">Asian Studies</a></li><li><a href="./resources/canadian%20studies">Canadian Studies</a></li><li><a href="./resources/CLAS">CLAS</a></li><li><a href="./resources/environmental%20studies">Environmental Studies</a></li><li><a href="./resources/european%20studies">European Studies</a></li><li><a href="./resources/gender%20studies">Gender Studies</a></li><li><a href="./resources/global%20studies">Global Studies</a></li><li><a href="./resources/native%20american%20studies">Native American Studies</a></li><li><a href="./resources/outdoor%20studies">Outdoor Studies</a></li><li><a href="./resources/sports%20studies">Sports Studies</a></li><li><a href="./resources/US%20cultural%20and%20ethnic%20studies">US Cultural &amp; Ethnic Studies</a></li></ul>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['library_interdisciplinary_links'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'library_sciences_links';
  $box->plugin_key = 'simple';
  $box->title = 'Sciences';
  $box->description = 'Sciences Links';
  $box->options = array(
    'body' => array(
      'value' => '<ul><li><a href="./resources/biology">Biology</a></li><li><a href="./resources/biochemistry">Biochemistry</a></li><li><a href="./resources/chemistry">Chemistry</a></li><li><a href="./resources/computer%20science">Computer Science</a></li><li><a href="./resources/conservation%20biology">Conservation Biology</a></li><li><a href="./resources/geology">Geology</a></li><li><a href="./resources/mathematics">Mathematics</a></li><li><a href="./resources/physics">Physics</a></li><li><a href="./resources/psychology">Psychology</a></li></ul>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['library_sciences_links'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'library_social_sciences_links';
  $box->plugin_key = 'simple';
  $box->title = 'Social Sciences';
  $box->description = 'Social Sciences Links';
  $box->options = array(
    'body' => array(
      'value' => '<ul><li><a href="./resources/anthropology">Anthropology</a></li><li><a href="/library/resources/economics">Economics</a></li><li><a href="/library/resources/education">Education</a></li><li><a href="/library/resources/government">Government</a></li><li><a href="./resources/sociology">Sociology</a></li></ul>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['library_social_sciences_links'] = $box;

  return $export;
}
