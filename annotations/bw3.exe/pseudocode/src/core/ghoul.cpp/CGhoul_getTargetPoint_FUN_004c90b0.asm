; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_ghoul_cpp_CGhoul_getTargetPoint_FUN_004c90b0(CGhoul *this_ptr,CVector3f *out_point)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_point
;
; Referenced Globals:
;   undefined4 DAT_01d22da0
;
; Called Functions:
;   core_skeleton.cpp_FUN_0054d9c0
;   core_xform.cpp_FUN_00583260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c90b0
        ;   Label: core_ghoul.cpp_CGhoul_getTargetPoint_FUN_004c90b0
    PUSH EDI                            ; 004c90b1
    PUSH EBP                            ; 004c90b2
    MOV EBP,ESP                         ; 004c90b3
    SUB ESP,0x78                        ; 004c90b5
    MOV EBX,ESI                         ; 004c90b8
    MOV EDX,dword ptr [0x01d22da0]      ; 004c90ba | DAT_01d22da0
    MOV ESI,dword ptr [EBP + 0x10]      ; 004c90c0
    PUSH EDX                            ; 004c90c3
    ADD ESI,0x158                       ; 004c90c4
    PUSH ESI                            ; 004c90ca
    LEA ESI,[EBP + -0x48]               ; 004c90cb
    LEA EDI,[EBP + -0x78]               ; 004c90ce
    CALL core_skeleton.cpp_FUN_0054d9c0 ; 004c90d1
        ;   XREF to: 0054d9c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054d9c0()
    MOV ECX,0xc                         ; 004c90d6
    LEA ESI,[EBP + -0x48]               ; 004c90db
    MOVSD.REP ES:EDI,ESI                ; 004c90de
    ADD ESP,0x8                         ; 004c90e0
    LEA ESI,[EBP + -0x78]               ; 004c90e3
    MOV EDI,0x3e99999a                  ; 004c90e6
    XOR ECX,ECX                         ; 004c90eb
    PUSH ESI                            ; 004c90ed
    MOV ESI,0x3f333333                  ; 004c90ee
    MOV dword ptr [EBP + -0x18],ECX     ; 004c90f3
    MOV dword ptr [EBP + -0x14],ESI     ; 004c90f6
    LEA ESI,[EBP + -0x18]               ; 004c90f9
    MOV dword ptr [EBP + -0x10],EDI     ; 004c90fc
    PUSH ESI                            ; 004c90ff
    LEA ESI,[EBP + -0xc]                ; 004c9100
    MOV EDI,EBX                         ; 004c9103
    CALL core_xform.cpp_FUN_00583260    ; 004c9105
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    LEA ESI,[EBP + -0xc]                ; 004c910a
    ADD ESP,0x8                         ; 004c910d
    MOVSD ES:EDI,ESI                    ; 004c9110
    MOVSD ES:EDI,ESI                    ; 004c9111
    MOVSD ES:EDI,ESI                    ; 004c9112
    MOV EAX,EBX                         ; 004c9113
    MOV ESP,EBP                         ; 004c9115
    POP EBP                             ; 004c9117
    POP EDI                             ; 004c9118
    POP EBX                             ; 004c9119
    RET                                 ; 004c911a

