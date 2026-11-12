; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_demnfolk_cpp_CDemnfolk_renderTransparent_FUN_00458200(CDemnfolk *this_ptr)
;
; Parameters:
; CDemnfolk *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b80
;   core_charactr.cpp_CCharacter_renderTransparent_FUN_0042f510
;   core_dlight.cpp_renderConeLightGeometry_FUN_0045f5a0
;   core_skeleton.cpp_FUN_0054d9c0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250
;   core_xform.cpp_FUN_00583260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00458200
        ;   Label: core_demnfolk.cpp_CDemnfolk_renderTransparent_FUN_00458200
    PUSH ESI                            ; 00458201
    PUSH EDI                            ; 00458202
    PUSH EBP                            ; 00458203
    MOV EBP,ESP                         ; 00458204
    SUB ESP,0x144                       ; 00458206
    SUB EBP,0x7e                        ; 0045820c
    MOV EBX,dword ptr [EBP + 0x92]      ; 0045820f
    CMP dword ptr [EBX + 0x27bc],0x0    ; 00458215
    JZ 0x00458391                       ; 0045821c
        ;   XREF to: 00458391 (CONDITIONAL_JUMP)  ; LAB_00458391
    CMP dword ptr [EBX + 0xd0d8],0x0    ; 00458222
    JZ 0x00458391                       ; 00458229
        ;   XREF to: 00458391 (CONDITIONAL_JUMP)  ; LAB_00458391
    MOV ESI,dword ptr [EBX + 0xd0e8]    ; 0045822f
    PUSH ESI                            ; 00458235
    LEA EAX,[EBX + 0x158]               ; 00458236
    PUSH EAX                            ; 0045823c
    LEA ESI,[EBP + 0xffffff6a]          ; 0045823d
    LEA EDI,[EBP + 0xffffff3a]          ; 00458243
    CALL core_skeleton.cpp_FUN_0054d9c0 ; 00458249
        ;   XREF to: 0054d9c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054d9c0()
    MOV ECX,0xc                         ; 0045824e
    ADD ESP,0x8                         ; 00458253
    LEA EAX,[EBP + 0xffffff3a]          ; 00458256
    LEA ESI,[EBP + 0xffffff6a]          ; 0045825c
    PUSH EAX                            ; 00458262
    MOVSD.REP ES:EDI,ESI                ; 00458263
    MOV EAX,0x3f000000                  ; 00458265
    LEA ESI,[EBP + -0x2a]               ; 0045826a
    MOV dword ptr [EBP + -0x4a],EAX     ; 0045826d
    MOV dword ptr [EBP + -0x46],EAX     ; 00458270
    LEA EAX,[EBP + -0x4e]               ; 00458273
    XOR EDI,EDI                         ; 00458276
    PUSH EAX                            ; 00458278
    MOV dword ptr [EBP + -0x4e],EDI     ; 00458279
    LEA EDI,[EBP + -0x66]               ; 0045827c
    CALL core_xform.cpp_FUN_00583260    ; 0045827f
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 00458284
    LEA EAX,[EBP + -0x66]               ; 00458287
    LEA ESI,[EBP + -0x2a]               ; 0045828a
    PUSH EAX                            ; 0045828d
    MOVSD ES:EDI,ESI                    ; 0045828e
    MOVSD ES:EDI,ESI                    ; 0045828f
    MOVSD ES:EDI,ESI                    ; 00458290
    PUSH EBX                            ; 00458291
    LEA ESI,[EBP + -0x1e]               ; 00458292
    LEA EDI,[EBP + -0x5a]               ; 00458295
    CALL core_actor.cpp_FUN_00408b80    ; 00458298
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + -0x1e]               ; 0045829d
    ADD ESP,0x8                         ; 004582a0
    LEA EAX,[EBP + 0xffffff3a]          ; 004582a3
    XOR ECX,ECX                         ; 004582a9
    PUSH EAX                            ; 004582ab
    MOV dword ptr [EBP + -0x6],ECX      ; 004582ac
    MOV dword ptr [EBP + -0x2],ECX      ; 004582af
    MOV dword ptr [EBP + 0x2],ECX       ; 004582b2
    LEA EAX,[EBP + -0x6]                ; 004582b5
    MOVSD ES:EDI,ESI                    ; 004582b8
    MOVSD ES:EDI,ESI                    ; 004582b9
    MOVSD ES:EDI,ESI                    ; 004582ba
    PUSH EAX                            ; 004582bb
    LEA ESI,[EBP + -0x12]               ; 004582bc
    LEA EDI,[EBP + 0x1e]                ; 004582bf
    CALL core_xform.cpp_FUN_00583260    ; 004582c2
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 004582c7
    LEA EAX,[EBP + 0x1e]                ; 004582ca
    LEA ESI,[EBP + -0x12]               ; 004582cd
    PUSH EAX                            ; 004582d0
    MOVSD ES:EDI,ESI                    ; 004582d1
    MOVSD ES:EDI,ESI                    ; 004582d2
    MOVSD ES:EDI,ESI                    ; 004582d3
    PUSH EBX                            ; 004582d4
    LEA ESI,[EBP + 0x66]                ; 004582d5
    LEA EDI,[EBP + -0x42]               ; 004582d8
    CALL core_actor.cpp_FUN_00408b00    ; 004582db
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[EBP + 0x66]                ; 004582e0
    ADD ESP,0x8                         ; 004582e3
    LEA EAX,[EBP + 0xffffff3a]          ; 004582e6
    MOV ECX,0x3f800000                  ; 004582ec
    PUSH EAX                            ; 004582f1
    XOR EAX,EAX                         ; 004582f2
    MOV dword ptr [EBP + -0x2e],ECX     ; 004582f4
    MOV dword ptr [EBP + -0x36],EAX     ; 004582f7
    MOV dword ptr [EBP + -0x32],EAX     ; 004582fa
    LEA EAX,[EBP + -0x36]               ; 004582fd
    MOVSD ES:EDI,ESI                    ; 00458300
    MOVSD ES:EDI,ESI                    ; 00458301
    MOVSD ES:EDI,ESI                    ; 00458302
    PUSH EAX                            ; 00458303
    LEA ESI,[EBP + 0x6]                 ; 00458304
    LEA EDI,[EBP + 0x5a]                ; 00458307
    CALL core_xform.cpp_FUN_00583260    ; 0045830a
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 0045830f
    LEA EAX,[EBP + 0x5a]                ; 00458312
    LEA ESI,[EBP + 0x6]                 ; 00458315
    PUSH EAX                            ; 00458318
    MOVSD ES:EDI,ESI                    ; 00458319
    MOVSD ES:EDI,ESI                    ; 0045831a
    MOVSD ES:EDI,ESI                    ; 0045831b
    PUSH EBX                            ; 0045831c
    LEA ESI,[EBP + 0x12]                ; 0045831d
    LEA EDI,[EBP + 0x72]                ; 00458320
    CALL core_actor.cpp_FUN_00408b00    ; 00458323
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[EBP + 0x12]                ; 00458328
    LEA EAX,[EBP + 0x36]                ; 0045832b
    MOVSD ES:EDI,ESI                    ; 0045832e
    MOVSD ES:EDI,ESI                    ; 0045832f
    MOVSD ES:EDI,ESI                    ; 00458330
    ADD ESP,0x8                         ; 00458331
    FLD float ptr [EBP + 0x72]          ; 00458334
    FLD float ptr [EBP + 0x76]          ; 00458337
    FLD float ptr [EBP + 0x7a]          ; 0045833a
    LEA EDI,[EBP + 0x36]                ; 0045833d
    LEA ESI,[EBP + 0x42]                ; 00458340
    FXCH ST2                            ; 00458343
    FSUB float ptr [EBP + -0x42]        ; 00458345
    FXCH                                ; 00458348
    FSUB float ptr [EBP + -0x3e]        ; 0045834a
    FXCH ST2                            ; 0045834d
    FSUB float ptr [EBP + -0x3a]        ; 0045834f
    FXCH                                ; 00458352
    FSTP float ptr [EBP + 0x42]         ; 00458354
    FXCH                                ; 00458357
    FSTP float ptr [EBP + 0x46]         ; 00458359
    FSTP float ptr [EBP + 0x4a]         ; 0045835c
    MOVSD ES:EDI,ESI                    ; 0045835f
    MOVSD ES:EDI,ESI                    ; 00458360
    MOVSD ES:EDI,ESI                    ; 00458361
    PUSH EAX                            ; 00458362
    LEA ESI,[EBP + 0x4e]                ; 00458363
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 00458366
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    ADD ESP,0x4                         ; 0045836b
    PUSH 0x40c00000                     ; 0045836e
    LEA EAX,[EBP + 0x2a]                ; 00458373
    PUSH 0x42600000                     ; 00458376
    LEA EDI,[EBP + 0x2a]                ; 0045837b
    PUSH EAX                            ; 0045837e
    LEA EAX,[EBP + -0x5a]               ; 0045837f
    LEA ESI,[EBP + 0x4e]                ; 00458382
    PUSH EAX                            ; 00458385
    MOVSD ES:EDI,ESI                    ; 00458386
    MOVSD ES:EDI,ESI                    ; 00458387
    MOVSD ES:EDI,ESI                    ; 00458388
    CALL core_dlight.cpp_renderConeLightGeometry_FUN_0045f5a0 ; 00458389
        ;   XREF to: 0045f5a0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_renderConeLightGeometry_FUN_0045f5a0(CVector3f * position, CVector3f * rotation, float fov, float falloff)
    ADD ESP,0x10                        ; 0045838e
    CMP dword ptr [EBX + 0x27bc],0x0    ; 00458391
        ;   Label: LAB_00458391
    JNZ 0x004583a8                      ; 00458398
        ;   XREF to: 004583a8 (CONDITIONAL_JUMP)  ; LAB_004583a8
    MOV EAX,dword ptr [EBX + 0x27bc]    ; 0045839a
    LEA ESP,[EBP + 0x7e]                ; 004583a0
    POP EBP                             ; 004583a3
    POP EDI                             ; 004583a4
    POP ESI                             ; 004583a5
    POP EBX                             ; 004583a6
    RET                                 ; 004583a7
    PUSH EBX                            ; 004583a8
        ;   Label: LAB_004583a8
    CALL core_charactr.cpp_CCharacter_renderTransparent_FUN_0042f510 ; 004583a9
        ;   XREF to: 0042f510 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderTransparent_FUN_0042f510(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004583ae
    MOV EAX,dword ptr [EBX + 0x27bc]    ; 004583b1
    LEA ESP,[EBP + 0x7e]                ; 004583b7
    POP EBP                             ; 004583ba
    POP EDI                             ; 004583bb
    POP ESI                             ; 004583bc
    POP EBX                             ; 004583bd
    RET                                 ; 004583be

