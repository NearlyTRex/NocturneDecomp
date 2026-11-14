; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_enemy_cpp_FUN_00488850(int param_1,int param_2)
;
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00522350 at 00528ae1
;
; Referenced Globals:
;   undefined4 DAT_005f6068
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00488850
        ;   Label: core_enemy.cpp_FUN_00488850
    MOV EDX,dword ptr [ESP + 0x8]       ; 00488854
    MOV ECX,dword ptr [0x005f6068]      ; 00488858 | DAT_005f6068
    MOV dword ptr [EAX + 0x10af0],EDX   ; 0048885e
    CMP EDX,ECX                         ; 00488864
    JNZ 0x00488873                      ; 00488866
        ;   XREF to: 00488873 (CONDITIONAL_JUMP)  ; LAB_00488873
    MOV dword ptr [EAX + 0x10a7c],0x0   ; 00488868
    RET                                 ; 00488872
    MOV dword ptr [EAX + 0x10a78],EDX   ; 00488873
        ;   Label: LAB_00488873
    MOV dword ptr [EAX + 0x10a7c],0x0   ; 00488879
    RET                                 ; 00488883

