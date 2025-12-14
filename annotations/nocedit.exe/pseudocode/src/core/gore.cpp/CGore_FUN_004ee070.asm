; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_gore.cpp_CGore_FUN_004ee070(CGore * this_ptr)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_handleFootstep_FUN_0040ca10 at 0040cae0
;
; Referenced Globals:
;   undefined4 DAT_02da8c24
;   undefined4 DAT_02da8c28
;   CFootstep[1000] DAT_02da8c2c
;
; Called Functions:
;   core_gore.cpp_FUN_004ed240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ee070
        ;   Label: core_gore.cpp_CGore_FUN_004ee070
    PUSH ESI                            ; 004ee071
    PUSH EDI                            ; 004ee072
    PUSH EBP                            ; 004ee073
    MOV EBP,ESP                         ; 004ee074
    MOV EDX,0x2da8c2c                   ; 004ee076 | DAT_02da8c2c
    MOV ECX,dword ptr [0x02da8c24]      ; 004ee07b | DAT_02da8c24
    MOV EAX,[0x02da8c24]                ; 004ee081 | DAT_02da8c24
    INC ECX                             ; 004ee086
    SHL EAX,0x6                         ; 004ee087
    MOV dword ptr [0x02da8c24],ECX      ; 004ee08a | DAT_02da8c24
    ADD EDX,EAX                         ; 004ee090
    CMP ECX,0x3e8                       ; 004ee092
    JGE 0x004ee0dd                      ; 004ee098
        ;   XREF to: 004ee0dd (CONDITIONAL_JUMP)  ; LAB_004ee0dd
    MOV EDI,dword ptr [0x02da8c28]      ; 004ee09a | DAT_02da8c28
        ;   Label: LAB_004ee09a
    CMP EDI,0x3e8                       ; 004ee0a0
    JGE 0x004ee0b0                      ; 004ee0a6
        ;   XREF to: 004ee0b0 (CONDITIONAL_JUMP)  ; LAB_004ee0b0
    LEA EAX,[EDI + 0x1]                 ; 004ee0a8
    MOV [0x02da8c28],EAX                ; 004ee0ab | DAT_02da8c28
    MOV ECX,dword ptr [EBP + 0x28]      ; 004ee0b0
        ;   Label: LAB_004ee0b0
    PUSH ECX                            ; 004ee0b3
    MOV EBX,dword ptr [EBP + 0x24]      ; 004ee0b4
    MOV ESI,dword ptr [EBP + 0x20]      ; 004ee0b7
    PUSH EBX                            ; 004ee0ba
    CMP ESI,0xb                         ; 004ee0bb
    SETZ AL                             ; 004ee0be
    AND EAX,0xff                        ; 004ee0c1
    PUSH EAX                            ; 004ee0c6
    MOV EDI,dword ptr [EBP + 0x1c]      ; 004ee0c7
    PUSH EDI                            ; 004ee0ca
    MOV EAX,dword ptr [EBP + 0x18]      ; 004ee0cb
    PUSH EAX                            ; 004ee0ce
    PUSH EDX                            ; 004ee0cf
    CALL core_gore.cpp_FUN_004ed240     ; 004ee0d0
        ;   XREF to: 004ed240 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004ed240()
    ADD ESP,0x18                        ; 004ee0d5
    POP EBP                             ; 004ee0d8
    POP EDI                             ; 004ee0d9
    POP ESI                             ; 004ee0da
    POP EBX                             ; 004ee0db
    RET                                 ; 004ee0dc
    XOR ESI,ESI                         ; 004ee0dd
        ;   Label: LAB_004ee0dd
    MOV dword ptr [0x02da8c24],ESI      ; 004ee0df | DAT_02da8c24
    JMP 0x004ee09a                      ; 004ee0e5
        ;   XREF to: 004ee09a (UNCONDITIONAL_JUMP)  ; LAB_004ee09a

