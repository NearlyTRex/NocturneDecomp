; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cefe0(int param_1,int param_2,undefined4 param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_00765a98
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_melee.cpp_CMelee_initBloodSpurtEffects_FUN_004cf090
;   FUN_0040bce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cefe0
        ;   Label: FUN_004cefe0
    PUSH ESI                            ; 004cefe1
    PUSH EDI                            ; 004cefe2
    PUSH EBP                            ; 004cefe3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004cefe4
    MOV ESI,dword ptr [ESP + 0x20]      ; 004cefe8
    PUSH ESI                            ; 004cefec
    MOV EDX,dword ptr [ESP + 0x20]      ; 004cefed
    PUSH EDX                            ; 004ceff1
    MOV ECX,dword ptr [ESP + 0x20]      ; 004ceff2
    PUSH ECX                            ; 004ceff6
    PUSH EBX                            ; 004ceff7
    CALL FUN_0040bce0                   ; 004ceff8
        ;   XREF to: 0040bce0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bce0()
    ADD ESP,0x10                        ; 004ceffd
    MOV EDI,dword ptr [0x00765a98]      ; 004cf000 | DAT_00765a98
    PUSH EDI                            ; 004cf006
    PUSH ESI                            ; 004cf007
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004cf008
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004cf00d
    TEST EAX,EAX                        ; 004cf010
    JNZ 0x004cf01d                      ; 004cf012
        ;   XREF to: 004cf01d (CONDITIONAL_JUMP)  ; LAB_004cf01d
    TEST ESI,ESI                        ; 004cf014
    JNZ 0x004cf068                      ; 004cf016
        ;   XREF to: 004cf068 (CONDITIONAL_JUMP)  ; LAB_004cf068
    POP EBP                             ; 004cf018
    POP EDI                             ; 004cf019
    POP ESI                             ; 004cf01a
    POP EBX                             ; 004cf01b
    RET                                 ; 004cf01c
    MOV EBP,dword ptr [EAX + 0x2608]    ; 004cf01d
        ;   Label: LAB_004cf01d
    PUSH EBP                            ; 004cf023
    PUSH 0x14                           ; 004cf024
    PUSH EBX                            ; 004cf026
    CALL core_melee.cpp_CMelee_initBloodSpurtEffects_FUN_004cf090 ; 004cf027
        ;   XREF to: 004cf090 (UNCONDITIONAL_CALL)  ; undefined core_melee.cpp_CMelee_initBloodSpurtEffects_FUN_004cf090()
    ADD ESP,0xc                         ; 004cf02c
    CMP dword ptr [ESP + 0x18],0x1      ; 004cf02f
    JNZ 0x004cf04f                      ; 004cf034
        ;   XREF to: 004cf04f (CONDITIONAL_JUMP)  ; LAB_004cf04f
    LEA EDX,[EBX + 0x598]               ; 004cf036
    PUSH EDX                            ; 004cf03c
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004cf03d
    PUSH EBX                            ; 004cf043
    CALL dword ptr [EAX + 0x24]         ; 004cf044
    ADD ESP,0x8                         ; 004cf047
    POP EBP                             ; 004cf04a
    POP EDI                             ; 004cf04b
    POP ESI                             ; 004cf04c
    POP EBX                             ; 004cf04d
    RET                                 ; 004cf04e
    LEA EAX,[EBX + 0x5fc]               ; 004cf04f
        ;   Label: LAB_004cf04f
    PUSH EAX                            ; 004cf055
    MOV EDX,dword ptr [EBX + 0x14c]     ; 004cf056
    PUSH EBX                            ; 004cf05c
    CALL dword ptr [EDX + 0x24]         ; 004cf05d
    ADD ESP,0x8                         ; 004cf060
    POP EBP                             ; 004cf063
    POP EDI                             ; 004cf064
    POP ESI                             ; 004cf065
    POP EBX                             ; 004cf066
    RET                                 ; 004cf067
    LEA EAX,[EBX + 0x660]               ; 004cf068
        ;   Label: LAB_004cf068
    PUSH EAX                            ; 004cf06e
    MOV EDX,dword ptr [EBX + 0x14c]     ; 004cf06f
    PUSH EBX                            ; 004cf075
    CALL dword ptr [EDX + 0x24]         ; 004cf076
    ADD ESP,0x8                         ; 004cf079
    POP EBP                             ; 004cf07c
    POP EDI                             ; 004cf07d
    POP ESI                             ; 004cf07e
    POP EBX                             ; 004cf07f
    RET                                 ; 004cf080

