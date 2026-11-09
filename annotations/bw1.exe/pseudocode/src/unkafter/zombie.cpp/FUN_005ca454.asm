; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_zombie_cpp_FUN_005ca454(undefined4 param_1)
;
;
; XREF[2]:
;   crt_startup.cpp_WinMainBootstrap_FUN_005ca370 at 005ca413
;   crt_unknown.c_FUN_005c32d4 at 005c32f3
;
; Referenced Globals:
;   void* PTR_unkafter_zombie.cpp_FUN_005ca450_006269d4 = 005ca450
;   undefined4 DAT_02c9f060
;
; Called Functions:
;   unkafter_zombie.cpp_FUN_005ca450
;   unkafter_zombie.cpp_FUN_005ca480
;   unkafter_zombie.cpp_FUN_005cb688
;
; *****************************************************************************

section .text

    CALL dword ptr [0x006269d4]         ; 005ca454 | PTR_unkafter_zombie.cpp_FUN_005ca450_006269d4
        ;   Label: unkafter_zombie.cpp_FUN_005ca454
    CMP byte ptr [0x02c9f060],0x0       ; 005ca45a | DAT_02c9f060
    JNZ 0x005ca472                      ; 005ca461
        ;   XREF to: 005ca472 (CONDITIONAL_JUMP)  ; LAB_005ca472
    MOV EDX,0xff                        ; 005ca463
    MOV EAX,0x10                        ; 005ca468
    CALL unkafter_zombie.cpp_FUN_005cb688 ; 005ca46d
        ;   XREF to: 005cb688 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cb688()
    MOV EDX,dword ptr [ESP + 0x4]       ; 005ca472
        ;   Label: LAB_005ca472
    PUSH EDX                            ; 005ca476
    CALL unkafter_zombie.cpp_FUN_005ca480 ; 005ca477
        ;   XREF to: 005ca480 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005ca480()
    ADD ESP,0x4                         ; 005ca47c
    RET                                 ; 005ca47f

