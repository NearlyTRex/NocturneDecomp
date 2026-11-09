; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_inv_cpp_FUN_004da760(undefined4 *param_1)
;
;
; XREF[1]:
;   core_hero.cpp_FUN_004ce240 at 004ce262
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004da760
        ;   Label: core_inv.cpp_FUN_004da760
    MOV dword ptr [EDX + 0x334],0x0     ; 004da764
    MOV dword ptr [EDX],0x42c80000      ; 004da76e
    MOV dword ptr [EDX + 0x4],0x0       ; 004da774
    MOV dword ptr [EDX + 0x340],0x0     ; 004da77b
    MOV dword ptr [EDX + 0x344],0x0     ; 004da785
    MOV dword ptr [EDX + 0x348],0x0     ; 004da78f
    MOV dword ptr [EDX + 0x454],0x0     ; 004da799
    MOV dword ptr [EDX + 0x460],0x0     ; 004da7a3
    MOV dword ptr [EDX + 0x458],0x0     ; 004da7ad
    MOV dword ptr [EDX + 0x34c],0x0     ; 004da7b7
    MOV byte ptr [EDX + 0x354],0x0      ; 004da7c1
    MOV dword ptr [EDX + 0x464],0x0     ; 004da7c8
    MOV dword ptr [EDX + 0x45c],0x0     ; 004da7d2
    MOV dword ptr [EDX + 0x8],0x0       ; 004da7dc
    MOV dword ptr [EDX + 0xc],0x0       ; 004da7e3
    MOV dword ptr [EDX + 0x468],0x0     ; 004da7ea
    MOV EAX,EDX                         ; 004da7f4
    MOV dword ptr [EDX + 0x10],0x0      ; 004da7f6
    LEA ECX,[EDX + 0x190]               ; 004da7fd
    ADD EAX,0x4                         ; 004da803
        ;   Label: LAB_004da803
    MOV dword ptr [EAX + 0x468],0x0     ; 004da806
    CMP EAX,ECX                         ; 004da810
    JNZ 0x004da803                      ; 004da812
        ;   XREF to: 004da803 (CONDITIONAL_JUMP)  ; LAB_004da803
    MOV EAX,EDX                         ; 004da814
    LEA ECX,[EDX + 0x14]                ; 004da816
    ADD EAX,0x4                         ; 004da819
        ;   Label: LAB_004da819
    MOV dword ptr [EAX + 0x5f8],0x0     ; 004da81c
    MOV dword ptr [EAX + 0x60c],0x0     ; 004da826
    CMP EAX,ECX                         ; 004da830
    JNZ 0x004da819                      ; 004da832
        ;   XREF to: 004da819 (CONDITIONAL_JUMP)  ; LAB_004da819
    MOV EAX,EDX                         ; 004da834
    RET                                 ; 004da836

