; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_crossbow_cpp_FUN_00449830(CWeapon *param_1,float param_2,undefined4 param_3,undefined4 param_4,float param_5)
;
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_flame.cpp_CFlame_hide_FUN_004b8ab0
;   core_flame.cpp_FUN_004b7b90
;   core_weapon.cpp_CWeapon_process_FUN_005ad770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449830
        ;   Label: core_crossbow.cpp_FUN_00449830
    PUSH ESI                            ; 00449831
    PUSH EDI                            ; 00449832
    SUB ESP,0x30                        ; 00449833
    MOV EBX,dword ptr [ESP + 0x40]      ; 00449836
    PUSH dword ptr [ESP + 0x44]         ; 0044983a
    PUSH EBX                            ; 0044983e
    CALL core_weapon.cpp_CWeapon_process_FUN_005ad770 ; 0044983f
        ;   XREF to: 005ad770 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_process_FUN_005ad770(CWeapon * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00449844
    MOV EAX,dword ptr [EBX + 0x154]     ; 00449847
    PUSH EBX                            ; 0044984d
    LEA ESI,[ESP + 0x10]                ; 0044984e
    LEA EDI,[ESP + 0x1c]                ; 00449852
    CALL dword ptr [EAX + 0xe0]         ; 00449856
    ADD ESP,0x4                         ; 0044985c
    LEA EAX,[ESP + 0x18]                ; 0044985f
    LEA ESI,[ESP + 0xc]                 ; 00449863
    PUSH EAX                            ; 00449867
    MOVSD ES:EDI,ESI                    ; 00449868
    MOVSD ES:EDI,ESI                    ; 00449869
    MOVSD ES:EDI,ESI                    ; 0044986a
    PUSH EBX                            ; 0044986b
    LEA ESI,[ESP + 0x2c]                ; 0044986c
    LEA EDI,[ESP + 0x8]                 ; 00449870
    CALL core_actor.cpp_FUN_00408b40    ; 00449874
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x2c]                ; 00449879
    ADD ESP,0x8                         ; 0044987d
    MOVSD ES:EDI,ESI                    ; 00449880
    MOVSD ES:EDI,ESI                    ; 00449881
    MOVSD ES:EDI,ESI                    ; 00449882
    LEA EDX,[EBX + 0x59c]               ; 00449883
    MOV EAX,dword ptr [ESP]             ; 00449889
    MOV dword ptr [EDX],EAX             ; 0044988c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044988e
    MOV dword ptr [EDX + 0x4],EAX       ; 00449892
    MOV EAX,dword ptr [ESP + 0x8]       ; 00449895
    MOV dword ptr [EDX + 0x8],EAX       ; 00449899
    CMP dword ptr [EBX + 0x2d4],0x2     ; 0044989c
    JNZ 0x004498f6                      ; 004498a3
        ;   XREF to: 004498f6 (CONDITIONAL_JUMP)  ; LAB_004498f6
    CMP dword ptr [EBX + 0x568],0x0     ; 004498a5
    JLE 0x004498f6                      ; 004498ac
        ;   XREF to: 004498f6 (CONDITIONAL_JUMP)  ; LAB_004498f6
    CMP dword ptr [EBX + 0x56c],0x5     ; 004498ae
    JNZ 0x004498f6                      ; 004498b5
        ;   XREF to: 004498f6 (CONDITIONAL_JUMP)  ; LAB_004498f6
    FLD float ptr [EBX + 0x300]         ; 004498b7
    FLDZ                                ; 004498bd
    FCOMPP                              ; 004498bf
    FNSTSW AX                           ; 004498c1
    SAHF                                ; 004498c3
    JC 0x004498f6                       ; 004498c4
        ;   XREF to: 004498f6 (CONDITIONAL_JUMP)  ; LAB_004498f6
    MOV dword ptr [EBX + 0x578],0x1     ; 004498c6
    LEA EAX,[EBX + 0x57c]               ; 004498d0
        ;   Label: LAB_004498d0
    PUSH dword ptr [ESP + 0x44]         ; 004498d6
    PUSH EAX                            ; 004498da
    CALL core_flame.cpp_FUN_004b7b90    ; 004498db
        ;   XREF to: 004b7b90 (UNCONDITIONAL_CALL)  ; void core_flame.cpp_FUN_004b7b90(CFlame * this_ptr, float delta_time)
    MOV EAX,dword ptr [EBX + 0x578]     ; 004498e0
    ADD ESP,0x8                         ; 004498e6
    MOV dword ptr [EBX + 0xfc],EAX      ; 004498e9
    ADD ESP,0x30                        ; 004498ef
    POP EDI                             ; 004498f2
    POP ESI                             ; 004498f3
    POP EBX                             ; 004498f4
    RET                                 ; 004498f5
    LEA EAX,[EBX + 0x57c]               ; 004498f6
        ;   Label: LAB_004498f6
    PUSH EAX                            ; 004498fc
    CALL core_flame.cpp_CFlame_hide_FUN_004b8ab0 ; 004498fd
        ;   XREF to: 004b8ab0 (UNCONDITIONAL_CALL)  ; void core_flame.cpp_CFlame_hide_FUN_004b8ab0(CFlame * this_ptr)
    ADD ESP,0x4                         ; 00449902
    MOV dword ptr [EBX + 0x578],0x0     ; 00449905
    JMP 0x004498d0                      ; 0044990f
        ;   XREF to: 004498d0 (UNCONDITIONAL_JUMP)  ; LAB_004498d0

