<?php
echo "--- P11: Perulangan & Array ---\n";
$buah = ["Apel", "Mangga", "Jeruk"];
foreach ($buah as $index => $nama) {
    echo "Buah ke-" . ($index+1) . ": " . $nama . "\n";
}
?>