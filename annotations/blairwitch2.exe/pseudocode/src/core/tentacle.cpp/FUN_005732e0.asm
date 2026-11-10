; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tentacle_cpp_FUN_005732e0(int param_1)
;
; Local Variables:
; undefined        Stack[-0xfc]:1  local_fc
; undefined        Stack[-0xcc]:1  local_cc
; undefined        Stack[-0x9c]:1  local_9c
; undefined        Stack[-0x6c]:1  local_6c
; undefined        Stack[-0x3c]:1  local_3c
;
; XREF[2]:
;   core_tentacle.cpp_CTentacle_attractActorToward_FUN_00573110 at 0057319a
;   core_tentacle.cpp_CTentacle_process_FUN_005726c0 at 00572874
;
; Referenced Globals:
;   undefined4 DAT_0264c0b0
;   undefined4 DAT_0264c0b4
;   undefined4 DAT_0264c0b8
;   undefined4 DAT_0264c0bc
;
; Called Functions:
;   core_xform.cpp_lerpMatrix3x4_FUN_00593770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005732e0
        ;   Label: core_tentacle.cpp_FUN_005732e0
    PUSH EDI                            ; 005732e1
    PUSH EBP                            ; 005732e2
    SUB ESP,0xf0                        ; 005732e3
    MOV EBX,ESI                         ; 005732e9
    MOV EBP,dword ptr [0x0264c0b4]      ; 005732eb | DAT_0264c0b4
    LEA EAX,[EBP*0x4 + 0x0]             ; 005732f1
    SUB EAX,EBP                         ; 005732f8
    MOV EBP,dword ptr [ESP + 0x100]     ; 005732fa
    SHL EAX,0x4                         ; 00573301
    ADD EBP,0x1134                      ; 00573304
    PUSH 0x3f000000                     ; 0057330a
    ADD EAX,EBP                         ; 0057330f
    MOV ESI,dword ptr [0x0264c0b0]      ; 00573311 | DAT_0264c0b0
    PUSH EAX                            ; 00573317
    LEA EAX,[ESI*0x4 + 0x0]             ; 00573318
    SUB EAX,ESI                         ; 0057331f
    SHL EAX,0x4                         ; 00573321
    ADD EAX,EBP                         ; 00573324
    PUSH EAX                            ; 00573326
    LEA ESI,[ESP + 0x9c]                ; 00573327
    LEA EDI,[ESP + 0x3c]                ; 0057332e
    CALL core_xform.cpp_lerpMatrix3x4_FUN_00593770 ; 00573332
        ;   XREF to: 00593770 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_lerpMatrix3x4_FUN_00593770()
    MOV ECX,0xc                         ; 00573337
    LEA ESI,[ESP + 0x9c]                ; 0057333c
    ADD ESP,0xc                         ; 00573343
    MOVSD.REP ES:EDI,ESI                ; 00573346
    MOV ESI,dword ptr [0x0264c0bc]      ; 00573348 | DAT_0264c0bc
    LEA EAX,[ESI*0x4 + 0x0]             ; 0057334e
    SUB EAX,ESI                         ; 00573355
    SHL EAX,0x4                         ; 00573357
    PUSH 0x3f000000                     ; 0057335a
    ADD EAX,EBP                         ; 0057335f
    MOV ESI,dword ptr [0x0264c0b8]      ; 00573361 | DAT_0264c0b8
    PUSH EAX                            ; 00573367
    LEA EAX,[ESI*0x4 + 0x0]             ; 00573368
    SUB EAX,ESI                         ; 0057336f
    SHL EAX,0x4                         ; 00573371
    ADD EAX,EBP                         ; 00573374
    PUSH EAX                            ; 00573376
    LEA ESI,[ESP + 0xc]                 ; 00573377
    LEA EDI,[ESP + 0x6c]                ; 0057337b
    CALL core_xform.cpp_lerpMatrix3x4_FUN_00593770 ; 0057337f
        ;   XREF to: 00593770 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_lerpMatrix3x4_FUN_00593770()
    ADD ESP,0xc                         ; 00573384
    MOV ECX,0xc                         ; 00573387
    LEA EAX,[ESP + 0x60]                ; 0057338c
    PUSH 0x3f000000                     ; 00573390
    LEA ESI,[ESP + 0x4]                 ; 00573395
    PUSH EAX                            ; 00573399
    LEA EAX,[ESP + 0x38]                ; 0057339a
    MOVSD.REP ES:EDI,ESI                ; 0057339e
    PUSH EAX                            ; 005733a0
    LEA ESI,[ESP + 0xcc]                ; 005733a1
    MOV EDI,EBX                         ; 005733a8
    CALL core_xform.cpp_lerpMatrix3x4_FUN_00593770 ; 005733aa
        ;   XREF to: 00593770 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_lerpMatrix3x4_FUN_00593770()
    MOV ECX,0xc                         ; 005733af
    LEA ESI,[ESP + 0xcc]                ; 005733b4
    ADD ESP,0xc                         ; 005733bb
    MOVSD.REP ES:EDI,ESI                ; 005733be
    MOV EAX,EBX                         ; 005733c0
    ADD ESP,0xf0                        ; 005733c2
    POP EBP                             ; 005733c8
    POP EDI                             ; 005733c9
    POP EBX                             ; 005733ca
    RET                                 ; 005733cb

