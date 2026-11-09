; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004ac690(undefined4 *param_1)
;
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_fire.cpp_FUN_004b4dd0 at 004b4fa9
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ac690
        ;   Label: core_fire.cpp_FUN_004ac690
    PUSH ESI                            ; 004ac691
    PUSH EDI                            ; 004ac692
    SUB ESP,0x18                        ; 004ac693
    MOV EBX,dword ptr [ESP + 0x28]      ; 004ac696
    MOV EDX,dword ptr [EBX + 0x10]      ; 004ac69a
    TEST EDX,EDX                        ; 004ac69d
    JNZ 0x004ac6a8                      ; 004ac69f
        ;   XREF to: 004ac6a8 (CONDITIONAL_JUMP)  ; LAB_004ac6a8
    ADD ESP,0x18                        ; 004ac6a1
        ;   Label: LAB_004ac6a1
    POP EDI                             ; 004ac6a4
    POP ESI                             ; 004ac6a5
    POP EBX                             ; 004ac6a6
    RET                                 ; 004ac6a7
    LEA EAX,[EBX + 0x24]                ; 004ac6a8
        ;   Label: LAB_004ac6a8
    PUSH EAX                            ; 004ac6ab
    PUSH EDX                            ; 004ac6ac
    LEA ESI,[ESP + 0x8]                 ; 004ac6ad
    LEA EDI,[ESP + 0x14]                ; 004ac6b1
    CALL core_actor.cpp_FUN_00408b40    ; 004ac6b5
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x8]                 ; 004ac6ba
    ADD ESP,0x8                         ; 004ac6be
    LEA EAX,[ESP + 0xc]                 ; 004ac6c1
    MOVSD ES:EDI,ESI                    ; 004ac6c5
    MOVSD ES:EDI,ESI                    ; 004ac6c6
    MOVSD ES:EDI,ESI                    ; 004ac6c7
    CMP EBX,EAX                         ; 004ac6c8
    JZ 0x004ac6a1                       ; 004ac6ca
        ;   XREF to: 004ac6a1 (CONDITIONAL_JUMP)  ; LAB_004ac6a1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004ac6cc
    MOV dword ptr [EBX],EAX             ; 004ac6d0
    MOV EAX,dword ptr [ESP + 0x10]      ; 004ac6d2
    MOV dword ptr [EBX + 0x4],EAX       ; 004ac6d6
    MOV EAX,dword ptr [ESP + 0x14]      ; 004ac6d9
    MOV dword ptr [EBX + 0x8],EAX       ; 004ac6dd
    ADD ESP,0x18                        ; 004ac6e0
    POP EDI                             ; 004ac6e3
    POP ESI                             ; 004ac6e4
    POP EBX                             ; 004ac6e5
    RET                                 ; 004ac6e6

