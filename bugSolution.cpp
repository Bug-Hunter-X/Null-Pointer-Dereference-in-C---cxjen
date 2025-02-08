int main() {
  int* ptr = nullptr;
  if (ptr != nullptr) {
    *ptr = 10; 
  } else {
    //Handle the null pointer appropriately, e.g.,
    std::cerr << "Error: Null pointer encountered." << std::endl;
    return 1; // Indicate an error
  }
  return 0;
}