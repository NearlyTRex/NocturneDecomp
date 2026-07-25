; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00532f50(char *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00532f30 at 00532f3f
;
; Referenced Globals:
;   undefined1 DAT_005c0e80
;   undefined1 DAT_005c0e81
;   undefined1 DAT_005c0e82
;   TerminatedCString s_d3d_dll_005c0e83
;   undefined4 DAT_02dc9d64
;   undefined4 DAT_02dc9e18
;
; Called Functions:
;   wincore_windll.cpp_kill_FUN_005322b0
;   wincore_windll.cpp_loadExternalRenderer_FUN_00531780
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00532f50
        ;   Label: FUN_00532f50
    PUSH EDI                            ; 00532f51
    CALL wincore_windll.cpp_kill_FUN_005322b0 ; 00532f52
        ;   XREF to: 005322b0 (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_kill_FUN_005322b0()
    MOV EAX,dword ptr [ESP + 0x10]      ; 00532f57
    MOV ESI,dword ptr [ESP + 0xc]       ; 00532f5b
    MOV EDI,0x5c0e80                    ; 00532f5f | DAT_005c0e80
    MOV [0x02dc9d64],EAX                ; 00532f64 | DAT_02dc9d64
    PUSH EDI                            ; 00532f69 | DAT_005c0e80
    MOV AL,byte ptr [ESI]               ; 00532f6a
        ;   Label: LAB_00532f6a
    MOV byte ptr [EDI],AL               ; 00532f6c | DAT_005c0e80 | DAT_005c0e82
    CMP AL,0x0                          ; 00532f6e
    JZ 0x00532f82                       ; 00532f70
        ;   XREF to: 00532f82 (CONDITIONAL_JUMP)  ; LAB_00532f82
    MOV AL,byte ptr [ESI + 0x1]         ; 00532f72
    ADD ESI,0x2                         ; 00532f75
    MOV byte ptr [EDI + 0x1],AL         ; 00532f78 | DAT_005c0e81 | = "d3d.dll"
    ADD EDI,0x2                         ; 00532f7b
    CMP AL,0x0                          ; 00532f7e
    JNZ 0x00532f6a                      ; 00532f80
        ;   XREF to: 00532f6a (CONDITIONAL_JUMP)  ; LAB_00532f6a
    POP EDI                             ; 00532f82
        ;   Label: LAB_00532f82
    MOV EDX,dword ptr [0x02dc9e18]      ; 00532f83 | DAT_02dc9e18
    PUSH EDX                            ; 00532f89
    CALL wincore_windll.cpp_loadExternalRenderer_FUN_00531780 ; 00532f8a
        ;   XREF to: 00531780 (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_loadExternalRenderer_FUN_00531780()
    ADD ESP,0x4                         ; 00532f8f
    POP EDI                             ; 00532f92
    POP ESI                             ; 00532f93
    RET                                 ; 00532f94

