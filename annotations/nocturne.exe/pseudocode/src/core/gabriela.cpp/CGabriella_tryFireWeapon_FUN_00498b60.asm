; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gabriela_cpp_CGabriella_tryFireWeapon_FUN_00498b60(CGabriella *this_ptr)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gabriela.cpp_FUN_00495a20 at 004961ec
;
; Referenced Globals:
;   undefined4 DAT_005be368
;   undefined4 DAT_01e57284
;
; Called Functions:
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00511780
;   core_setcolid.cpp_CDemonSet_init_FUN_00511750
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00498b60
        ;   Label: core_gabriela.cpp_CGabriella_tryFireWeapon_FUN_00498b60
    PUSH ESI                            ; 00498b61
    MOV ESI,dword ptr [ESP + 0xc]       ; 00498b62
    PUSH ESI                            ; 00498b66
    MOV EDX,dword ptr [0x005be368]      ; 00498b67 | DAT_005be368
    PUSH EDX                            ; 00498b6d | DAT_01e57284
    LEA EBX,[ESI + 0x1f5a0]             ; 00498b6e
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 00498b74
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00511780(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00498b79
    MOV EAX,dword ptr [EBX + 0x330]     ; 00498b7c
    PUSH EAX                            ; 00498b82
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00498b83
    CALL dword ptr [EDX + 0xdc]         ; 00498b89
    ADD ESP,0x4                         ; 00498b8f
    TEST EAX,EAX                        ; 00498b92
    JZ 0x00498baf                       ; 00498b94
        ;   XREF to: 00498baf (CONDITIONAL_JUMP)  ; LAB_00498baf
    MOV EAX,dword ptr [EBX + 0x330]     ; 00498b96
    CMP dword ptr [EAX + 0x2d4],0x1     ; 00498b9c
    JNZ 0x00498baf                      ; 00498ba3
        ;   XREF to: 00498baf (CONDITIONAL_JUMP)  ; LAB_00498baf
    MOV dword ptr [ESI + 0x1fa74],0x3f800000 ; 00498ba5
    MOV EBX,dword ptr [0x005be368]      ; 00498baf | DAT_005be368
        ;   Label: LAB_00498baf
    PUSH EBX                            ; 00498bb5 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 00498bb6
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00511750(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00498bbb
    MOV dword ptr [ESI + 0x1fa54],0x0   ; 00498bbe
    POP ESI                             ; 00498bc8
    POP EBX                             ; 00498bc9
    RET                                 ; 00498bca

