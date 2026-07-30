; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stranger_cpp_CStranger_getCarryObjToBodyXForm_FUN_0053f210(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x38]:1  local_38
;
; Called Functions:
;   core_stranger.cpp_CStranger_computeWeaponAttachXForm_FUN_0053a760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053f210
        ;   Label: core_stranger.cpp_CStranger_getCarryObjToBodyXForm_FUN_0053f210
    PUSH EDI                            ; 0053f211
    SUB ESP,0x30                        ; 0053f212
    MOV EDX,dword ptr [ESP + 0x40]      ; 0053f215
    MOV EBX,ESI                         ; 0053f219
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0053f21b
    MOV EAX,EDX                         ; 0053f21f
    SHL EAX,0x4                         ; 0053f221
    ADD EAX,EDX                         ; 0053f224
    PUSH EDX                            ; 0053f226
    MOV EDX,dword ptr [ESI + EAX*0x4 + 0x24ac] ; 0053f227
    PUSH EDX                            ; 0053f22e
    PUSH ESI                            ; 0053f22f
    LEA ESI,[ESP + 0xc]                 ; 0053f230
    MOV EDI,EBX                         ; 0053f234
    CALL core_stranger.cpp_CStranger_computeWeaponAttachXForm_FUN_0053a760 ; 0053f236
        ;   XREF to: 0053a760 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_CStranger_computeWeaponAttachXForm_FUN_0053a760()
    MOV ECX,0xc                         ; 0053f23b
    LEA ESI,[ESP + 0xc]                 ; 0053f240
    ADD ESP,0xc                         ; 0053f244
    MOVSD.REP ES:EDI,ESI                ; 0053f247
    MOV EAX,EBX                         ; 0053f249
    ADD ESP,0x30                        ; 0053f24b
    POP EDI                             ; 0053f24e
    POP EBX                             ; 0053f24f
    RET                                 ; 0053f250

