; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_zombie_cpp_CZombie_getGrabbed_FUN_00562440(CZombie *this_ptr,CDemonActor *grabber,int grab_type)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   grabber
; int              Stack[0xc]:4   grab_type
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562440
        ;   Label: core_zombie.cpp_CZombie_getGrabbed_FUN_00562440
    MOV EBX,dword ptr [ESP + 0x8]       ; 00562441
    CMP dword ptr [ESP + 0x10],0x1      ; 00562445
    JNZ 0x00562471                      ; 0056244a
        ;   XREF to: 00562471 (CONDITIONAL_JUMP)  ; LAB_00562471
    MOV ECX,dword ptr [EBX + 0xbca4]    ; 0056244c
    TEST ECX,ECX                        ; 00562452
    JNZ 0x00562475                      ; 00562454
        ;   XREF to: 00562475 (CONDITIONAL_JUMP)  ; LAB_00562475
    MOV EAX,dword ptr [ESP + 0xc]       ; 00562456
        ;   Label: LAB_00562456
    MOV dword ptr [EBX + 0x2590],EAX    ; 0056245a
    MOV EAX,dword ptr [ESP + 0x10]      ; 00562460
    MOV dword ptr [EBX + 0x2594],EAX    ; 00562464
    MOV EAX,0x1                         ; 0056246a
    POP EBX                             ; 0056246f
    RET                                 ; 00562470
    XOR EAX,EAX                         ; 00562471
        ;   Label: LAB_00562471
    POP EBX                             ; 00562473
    RET                                 ; 00562474
    PUSH ECX                            ; 00562475
        ;   Label: LAB_00562475
    MOV EDX,dword ptr [ECX + 0x14c]     ; 00562476
    CALL dword ptr [EDX + 0xec]         ; 0056247c
    ADD ESP,0x4                         ; 00562482
    CMP EAX,EBX                         ; 00562485
    JNZ 0x00562456                      ; 00562487
        ;   XREF to: 00562456 (CONDITIONAL_JUMP)  ; LAB_00562456
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00562489
    PUSH EAX                            ; 0056248f
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00562490
    CALL dword ptr [EDX + 0xe8]         ; 00562496
    ADD ESP,0x4                         ; 0056249c
    JMP 0x00562456                      ; 0056249f
        ;   XREF to: 00562456 (UNCONDITIONAL_JUMP)  ; LAB_00562456

