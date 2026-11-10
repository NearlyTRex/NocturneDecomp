; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_tentacle_cpp_CTentacle_attractActorToward_FUN_00573110(CTentacle *this_ptr,CDemonActor *actor,CVector3f *target_local_point)
;
; Parameters:
; CTentacle *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; CVector3f *      Stack[0xc]:4   target_local_point
;
; Called Functions:
;   core_charactr.cpp_FUN_00429d60
;   core_tentacle.cpp_FUN_005732e0
;   core_xform.cpp_FUN_00591c10
;   core_xform.cpp_FUN_00592720
;   core_xform.cpp_lerpMatrix3x4_FUN_00593770
;   core_xform.cpp_matrixToEulerAngles_FUN_00591de0
;   core_xform.cpp_multiplyMatrix3x4_FUN_005916b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573110
        ;   Label: core_tentacle.cpp_CTentacle_attractActorToward_FUN_00573110
    SUB ESP,0x1e0                       ; 00573111
    MOV EBX,dword ptr [ESP + 0x1e8]     ; 00573117
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 0057311e
    CMP EAX,dword ptr [EBX + 0x10a78]   ; 00573125
    JZ 0x00573137                       ; 0057312b
        ;   XREF to: 00573137 (CONDITIONAL_JUMP)  ; LAB_00573137
    XOR EAX,EAX                         ; 0057312d
    ADD ESP,0x1e0                       ; 0057312f
    POP EBX                             ; 00573135
    RET                                 ; 00573136
    PUSH EDI                            ; 00573137
        ;   Label: LAB_00573137
    PUSH ESI                            ; 00573138
    LEA EAX,[EBX + 0x10b38]             ; 00573139
    PUSH dword ptr [EBX + 0x10b04]      ; 0057313f
    PUSH EAX                            ; 00573145
    LEA EAX,[EBX + 0x10b08]             ; 00573146
    PUSH EAX                            ; 0057314c
    LEA ESI,[ESP + 0x134]               ; 0057314d
    CALL core_xform.cpp_lerpMatrix3x4_FUN_00593770 ; 00573154
        ;   XREF to: 00593770 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_lerpMatrix3x4_FUN_00593770()
    ADD ESP,0xc                         ; 00573159
    LEA EAX,[EBX + 0x30]                ; 0057315c
    LEA EDI,[ESP + 0x68]                ; 0057315f
    PUSH EAX                            ; 00573163
    LEA EAX,[EBX + 0x20]                ; 00573164
    MOV ECX,0xc                         ; 00573167
    PUSH EAX                            ; 0057316c
    LEA EAX,[ESP + 0xa0]                ; 0057316d
    LEA ESI,[ESP + 0x130]               ; 00573174
    PUSH EAX                            ; 0057317b
    MOVSD.REP ES:EDI,ESI                ; 0057317c
    CALL core_xform.cpp_FUN_00591c10    ; 0057317e
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    ADD ESP,0xc                         ; 00573183
    LEA EAX,[ESP + 0x98]                ; 00573186
    PUSH EAX                            ; 0057318d
    PUSH EBX                            ; 0057318e
    LEA ESI,[ESP + 0x40]                ; 0057318f
    LEA EDI,[ESP + 0x100]               ; 00573193
    CALL core_tentacle.cpp_FUN_005732e0 ; 0057319a
        ;   XREF to: 005732e0 (UNCONDITIONAL_CALL)  ; undefined core_tentacle.cpp_FUN_005732e0()
    MOV ECX,0xc                         ; 0057319f
    ADD ESP,0x4                         ; 005731a4
    LEA EAX,[ESP + 0xfc]                ; 005731a7
    LEA ESI,[ESP + 0x3c]                ; 005731ae
    PUSH EAX                            ; 005731b2
    LEA EAX,[ESP + 0x70]                ; 005731b3
    MOVSD.REP ES:EDI,ESI                ; 005731b7
    PUSH EAX                            ; 005731b9
    LEA ESI,[ESP + 0x194]               ; 005731ba
    LEA EDI,[ESP + 0x14]                ; 005731c1
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 005731c5
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 005731ca
    LEA ESI,[ESP + 0x194]               ; 005731cf
    ADD ESP,0x8                         ; 005731d6
    LEA EAX,[ESP + 0xc]                 ; 005731d9
    MOVSD.REP ES:EDI,ESI                ; 005731dd
    PUSH EAX                            ; 005731df
    LEA ESI,[ESP + 0x160]               ; 005731e0
    LEA EDI,[ESP + 0xd0]                ; 005731e7
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 005731ee
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 005731f3
    LEA ESI,[ESP + 0x160]               ; 005731f8
    ADD ESP,0x8                         ; 005731ff
    LEA EAX,[ESP + 0xc8]                ; 00573202
    MOVSD.REP ES:EDI,ESI                ; 00573209
    PUSH EAX                            ; 0057320b
    LEA ESI,[ESP + 0x1e0]               ; 0057320c
    LEA EDI,[ESP + 0x1c8]               ; 00573213
    CALL core_xform.cpp_FUN_00592720    ; 0057321a
        ;   XREF to: 00592720 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00592720()
    LEA ESI,[ESP + 0x1e0]               ; 0057321f
    ADD ESP,0x4                         ; 00573226
    MOVSD ES:EDI,ESI                    ; 00573229
    MOVSD ES:EDI,ESI                    ; 0057322a
    MOVSD ES:EDI,ESI                    ; 0057322b
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 0057322c
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 00573232
    MOV dword ptr [EDX + 0x20],EAX      ; 00573239
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 0057323c
    MOV dword ptr [EDX + 0x24],EAX      ; 00573243
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 00573246
    MOV dword ptr [EDX + 0x28],EAX      ; 0057324d
    LEA EAX,[ESP + 0xc8]                ; 00573250
    PUSH EAX                            ; 00573257
    LEA ESI,[ESP + 0x1d4]               ; 00573258
    LEA EDI,[ESP + 0x1bc]               ; 0057325f
    CALL core_xform.cpp_matrixToEulerAngles_FUN_00591de0 ; 00573266
        ;   XREF to: 00591de0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_00591de0()
    LEA ESI,[ESP + 0x1d4]               ; 0057326b
    ADD ESP,0x4                         ; 00573272
    LEA EAX,[ESP + 0x1b8]               ; 00573275
    MOVSD ES:EDI,ESI                    ; 0057327c
    MOVSD ES:EDI,ESI                    ; 0057327d
    MOVSD ES:EDI,ESI                    ; 0057327e
    PUSH EAX                            ; 0057327f
    MOV ECX,dword ptr [EBX + 0x10a78]   ; 00573280
    PUSH ECX                            ; 00573286
    CALL core_charactr.cpp_FUN_00429d60 ; 00573287
        ;   XREF to: 00429d60 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00429d60()
    MOV EAX,0x1                         ; 0057328c
    ADD ESP,0x8                         ; 00573291
    POP ESI                             ; 00573294
    POP EDI                             ; 00573295
    ADD ESP,0x1e0                       ; 00573296
    POP EBX                             ; 0057329c
    RET                                 ; 0057329d

