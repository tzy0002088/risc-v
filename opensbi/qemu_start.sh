qemu-system-riscv64 -machine virt -m 128M -nographic -serial mon:stdio -bios ./fw_jump.bin -kernel riscv.elf