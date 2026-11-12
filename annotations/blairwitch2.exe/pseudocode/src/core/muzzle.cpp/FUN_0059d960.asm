; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_muzzle_cpp_FUN_0059d960(int param_1,int param_2)
;
;
; XREF[1]:
;   core_muzzle.cpp_FUN_0059dc80 at 0059dc9c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059d960
        ;   Label: core_muzzle.cpp_FUN_0059d960
    MOV EDX,dword ptr [ESP + 0x8]       ; 0059d964
    MOV ECX,dword ptr [EAX + 0x834]     ; 0059d968
    TEST ECX,ECX                        ; 0059d96e
    JZ 0x0059d976                       ; 0059d970
        ;   XREF to: 0059d976 (CONDITIONAL_JUMP)  ; LAB_0059d976
    CMP EDX,ECX                         ; 0059d972
    JLE 0x0059d979                      ; 0059d974
        ;   XREF to: 0059d979 (CONDITIONAL_JUMP)  ; LAB_0059d979
    XOR EAX,EAX                         ; 0059d976
        ;   Label: LAB_0059d976
    RET                                 ; 0059d978
    MOV dword ptr [EAX + 0x844],EDX     ; 0059d979
        ;   Label: LAB_0059d979
    MOV EAX,0x1                         ; 0059d97f
    RET                                 ; 0059d984

