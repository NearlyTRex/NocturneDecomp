; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_werewolf_cpp_FUN_0057fa60(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   core_skeleton.cpp_FUN_0054dcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057fa60
        ;   Label: core_werewolf.cpp_FUN_0057fa60
    PUSH ESI                            ; 0057fa61
    PUSH EDI                            ; 0057fa62
    SUB ESP,0x18                        ; 0057fa63
    MOV EAX,dword ptr [ESP + 0x28]      ; 0057fa66
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0057fa6a
    MOV EDX,dword ptr [EAX + 0xd058]    ; 0057fa6e
    PUSH EDX                            ; 0057fa74
    ADD EAX,0x158                       ; 0057fa75
    PUSH EAX                            ; 0057fa7a
    LEA ESI,[ESP + 0x8]                 ; 0057fa7b
    LEA EDI,[ESP + 0x14]                ; 0057fa7f
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 0057fa83
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA ESI,[ESP + 0x8]                 ; 0057fa88
    ADD ESP,0x8                         ; 0057fa8c
    LEA EAX,[ESP + 0xc]                 ; 0057fa8f
    MOVSD ES:EDI,ESI                    ; 0057fa93
    MOVSD ES:EDI,ESI                    ; 0057fa94
    MOVSD ES:EDI,ESI                    ; 0057fa95
    CMP EBX,EAX                         ; 0057fa96
    JNZ 0x0057faa6                      ; 0057fa98
        ;   XREF to: 0057faa6 (CONDITIONAL_JUMP)  ; LAB_0057faa6
    MOV EAX,0x1                         ; 0057fa9a
    ADD ESP,0x18                        ; 0057fa9f
    POP EDI                             ; 0057faa2
    POP ESI                             ; 0057faa3
    POP EBX                             ; 0057faa4
    RET                                 ; 0057faa5
    MOV EAX,dword ptr [ESP + 0xc]       ; 0057faa6
        ;   Label: LAB_0057faa6
    MOV dword ptr [EBX],EAX             ; 0057faaa
    MOV EAX,dword ptr [ESP + 0x10]      ; 0057faac
    MOV dword ptr [EBX + 0x4],EAX       ; 0057fab0
    MOV EAX,dword ptr [ESP + 0x14]      ; 0057fab3
    MOV dword ptr [EBX + 0x8],EAX       ; 0057fab7
    MOV EAX,0x1                         ; 0057faba
    ADD ESP,0x18                        ; 0057fabf
    POP EDI                             ; 0057fac2
    POP ESI                             ; 0057fac3
    POP EBX                             ; 0057fac4
    RET                                 ; 0057fac5

