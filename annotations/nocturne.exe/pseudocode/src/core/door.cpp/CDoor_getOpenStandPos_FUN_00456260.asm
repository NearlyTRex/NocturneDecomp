; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_door_cpp_CDoor_getOpenStandPos_FUN_00456260(CDoor *this_ptr,CVector3f *out_pos,CVector3f *direction,CVector3f *actor_pos)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_pos
; CVector3f *      Stack[0xc]:4   direction
; CVector3f *      Stack[0x10]:4   actor_pos
; Local Variables:
; undefined        Stack[-0x68]:1  local_68
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined        Stack[-0x2c]:1  local_2c
; undefined        Stack[-0x20]:1  local_20
;
; XREF[1]:
;   core_charactr.cpp_FUN_00428c00 at 00428cf4
;
; Referenced Globals:
;   undefined1* switchdataD_0045624c = 004562b4
;   TerminatedCString s_core_door_cpp_0057d21a
;   TerminatedCString s_CDoor_getOpenStandPos_in_0057d22b
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00456260
        ;   Label: core_door.cpp_CDoor_getOpenStandPos_FUN_00456260
    PUSH ESI                            ; 00456261
    PUSH EDI                            ; 00456262
    PUSH EBP                            ; 00456263
    MOV EBP,ESP                         ; 00456264
    SUB ESP,0x54                        ; 00456266
    AND ESP,0xfffffff8                  ; 00456269
    MOV EDI,dword ptr [EBP + 0x14]      ; 0045626c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0045626f
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00456272
    MOV EAX,dword ptr [ESI]             ; 00456275
    MOV dword ptr [ESP + 0xc],EAX       ; 00456277
    LEA EAX,[ESI + 0x4]                 ; 0045627b
    MOV EAX,dword ptr [EAX]             ; 0045627e
    MOV dword ptr [ESP + 0x10],EAX      ; 00456280
    LEA EAX,[ESI + 0x8]                 ; 00456284
    MOV EAX,dword ptr [EAX]             ; 00456287
    MOV dword ptr [ESP + 0x14],EAX      ; 00456289
    FLD float ptr [ESP + 0x14]          ; 0045628d
    FLDZ                                ; 00456291
    FCOMPP                              ; 00456293
    FNSTSW AX                           ; 00456295
    SAHF                                ; 00456297
    JA 0x00456320                       ; 00456298
        ;   XREF to: 00456320 (CONDITIONAL_JUMP)  ; LAB_00456320
    MOV EAX,dword ptr [EDI + 0x2d0]     ; 0045629e
        ;   Label: LAB_0045629e
    CMP EAX,0x3                         ; 004562a4
    JA 0x00456423                       ; 004562a7
        ;   XREF to: 00456423 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x45624c]  ; 004562ad | caseD_2 | caseD_3 | switchdataD_0045624c
        ;   Label: switchD
    MOV ESI,dword ptr [EBP + 0x20]      ; 004562b4
        ;   Label: caseD_0
    PUSH ESI                            ; 004562b7
    LEA EAX,[ESP + 0x40]                ; 004562b8
    PUSH EAX                            ; 004562bc
    PUSH EDI                            ; 004562bd
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 004562be
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    FLDZ                                ; 004562c3
    ADD ESP,0xc                         ; 004562c5
    LEA ESI,[EDI + 0x9b4]               ; 004562c8
    FCOMP float ptr [EAX + 0x8]         ; 004562ce
    FNSTSW AX                           ; 004562d1
    SAHF                                ; 004562d3
    JNC 0x00456398                      ; 004562d4
        ;   XREF to: 00456398 (CONDITIONAL_JUMP)  ; LAB_00456398
    LEA EAX,[ESP + 0xc]                 ; 004562da
    PUSH EAX                            ; 004562de
    LEA EAX,[ESP + 0x4]                 ; 004562df
    PUSH EAX                            ; 004562e3
    PUSH EDI                            ; 004562e4
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 004562e5
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [ESI]                 ; 004562ea
    FADD float ptr [EAX]                ; 004562ec
    ADD ESP,0xc                         ; 004562ee
    FSTP float ptr [ESP + 0x24]         ; 004562f1
    FLD float ptr [ESI + 0x4]           ; 004562f5
    FADD float ptr [EAX + 0x4]          ; 004562f8
    FSTP float ptr [ESP + 0x28]         ; 004562fb
    FLD float ptr [ESI + 0x8]           ; 004562ff
    FADD float ptr [EAX + 0x8]          ; 00456302
    LEA EAX,[ESP + 0x24]                ; 00456305
    FSTP float ptr [ESP + 0x2c]         ; 00456309
    CMP EBX,EAX                         ; 0045630d
    JNZ 0x00456375                      ; 0045630f
        ;   XREF to: 00456375 (CONDITIONAL_JUMP)  ; LAB_00456375
    FLD float ptr [EDI + 0x24]          ; 00456311
        ;   Label: LAB_00456311
    MOV EAX,EBX                         ; 00456314
    FSTP float ptr [EBX + 0x4]          ; 00456316
    MOV ESP,EBP                         ; 00456319
    POP EBP                             ; 0045631b
    POP EDI                             ; 0045631c
    POP ESI                             ; 0045631d
    POP EBX                             ; 0045631e
    RET                                 ; 0045631f
    FLD float ptr [ESP + 0xc]           ; 00456320
        ;   Label: LAB_00456320
    FLD float ptr [ESP + 0x10]          ; 00456324
    FLD float ptr [ESP + 0x14]          ; 00456328
    LEA ESI,[ESP + 0x30]                ; 0045632c
    LEA EAX,[ESP + 0xc]                 ; 00456330
    FXCH ST2                            ; 00456334
    FCHS                                ; 00456336
    FXCH                                ; 00456338
    FCHS                                ; 0045633a
    FXCH ST2                            ; 0045633c
    FCHS                                ; 0045633e
    FXCH ST2                            ; 00456340
    FSTP float ptr [ESP + 0x34]         ; 00456342
    FXCH                                ; 00456346
    FSTP float ptr [ESP + 0x38]         ; 00456348
    FSTP float ptr [ESP + 0x30]         ; 0045634c
    CMP EAX,ESI                         ; 00456350
    JZ 0x0045629e                       ; 00456352
        ;   XREF to: 0045629e (CONDITIONAL_JUMP)  ; LAB_0045629e
    MOV EAX,dword ptr [ESP + 0x30]      ; 00456358
    MOV dword ptr [ESP + 0xc],EAX       ; 0045635c
    MOV EAX,dword ptr [ESP + 0x34]      ; 00456360
    MOV dword ptr [ESP + 0x10],EAX      ; 00456364
    MOV EAX,dword ptr [ESP + 0x38]      ; 00456368
    MOV dword ptr [ESP + 0x14],EAX      ; 0045636c
    JMP 0x0045629e                      ; 00456370
        ;   XREF to: 0045629e (UNCONDITIONAL_JUMP)  ; LAB_0045629e
    MOV EAX,dword ptr [ESP + 0x24]      ; 00456375
        ;   Label: LAB_00456375
    MOV dword ptr [EBX],EAX             ; 00456379
    MOV EAX,dword ptr [ESP + 0x28]      ; 0045637b
    MOV dword ptr [EBX + 0x4],EAX       ; 0045637f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00456382
    MOV dword ptr [EBX + 0x8],EAX       ; 00456386
    FLD float ptr [EDI + 0x24]          ; 00456389
    MOV EAX,EBX                         ; 0045638c
    FSTP float ptr [EBX + 0x4]          ; 0045638e
    MOV ESP,EBP                         ; 00456391
    POP EBP                             ; 00456393
    POP EDI                             ; 00456394
    POP ESI                             ; 00456395
    POP EBX                             ; 00456396
    RET                                 ; 00456397
    LEA EAX,[ESP + 0xc]                 ; 00456398
        ;   Label: LAB_00456398
    PUSH EAX                            ; 0045639c
    LEA EAX,[ESP + 0x4c]                ; 0045639d
    PUSH EAX                            ; 004563a1
    PUSH EDI                            ; 004563a2
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 004563a3
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [ESI]                 ; 004563a8
    FSUB float ptr [EAX]                ; 004563aa
    ADD ESP,0xc                         ; 004563ac
    FSTP float ptr [ESP + 0x18]         ; 004563af
    FLD float ptr [ESI + 0x4]           ; 004563b3
    FSUB float ptr [EAX + 0x4]          ; 004563b6
    FSTP float ptr [ESP + 0x1c]         ; 004563b9
    FLD float ptr [ESI + 0x8]           ; 004563bd
    FSUB float ptr [EAX + 0x8]          ; 004563c0
    LEA EAX,[ESP + 0x18]                ; 004563c3
    FSTP float ptr [ESP + 0x20]         ; 004563c7
    CMP EBX,EAX                         ; 004563cb
    JZ 0x00456311                       ; 004563cd
        ;   XREF to: 00456311 (CONDITIONAL_JUMP)  ; LAB_00456311
    MOV EAX,dword ptr [ESP + 0x18]      ; 004563d3
    MOV dword ptr [EBX],EAX             ; 004563d7
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004563d9
    MOV dword ptr [EBX + 0x4],EAX       ; 004563dd
    MOV EAX,dword ptr [ESP + 0x20]      ; 004563e0
    MOV dword ptr [EBX + 0x8],EAX       ; 004563e4
    FLD float ptr [EDI + 0x24]          ; 004563e7
    MOV EAX,EBX                         ; 004563ea
    FSTP float ptr [EBX + 0x4]          ; 004563ec
    MOV ESP,EBP                         ; 004563ef
    POP EBP                             ; 004563f1
    POP EDI                             ; 004563f2
    POP ESI                             ; 004563f3
    POP EBX                             ; 004563f4
    RET                                 ; 004563f5
    LEA EAX,[EDI + 0x9b4]               ; 004563f6
        ;   Label: caseD_3
    CMP EBX,EAX                         ; 004563fc
    JZ 0x00456311                       ; 004563fe
        ;   XREF to: 00456311 (CONDITIONAL_JUMP)  ; LAB_00456311
    MOV EDX,dword ptr [EAX]             ; 00456404
    MOV dword ptr [EBX],EDX             ; 00456406
    MOV EDX,dword ptr [EAX + 0x4]       ; 00456408
    MOV dword ptr [EBX + 0x4],EDX       ; 0045640b
    MOV EDX,dword ptr [EAX + 0x8]       ; 0045640e
    MOV dword ptr [EBX + 0x8],EDX       ; 00456411
    FLD float ptr [EDI + 0x24]          ; 00456414
    MOV EAX,EBX                         ; 00456417
    FSTP float ptr [EBX + 0x4]          ; 00456419
    MOV ESP,EBP                         ; 0045641c
    POP EBP                             ; 0045641e
    POP EDI                             ; 0045641f
    POP ESI                             ; 00456420
    POP EBX                             ; 00456421
    RET                                 ; 00456422
    MOV EDX,0x57d21a                    ; 00456423 | = "..\\core\\door.cpp"
        ;   Label: default
    MOV ECX,0x340                       ; 00456428
    PUSH 0x57d22b                       ; 0045642d | = "CDoor::getOpenStandPos - invalid door..."
    MOV dword ptr [0x01cc4800],EDX      ; 00456432 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00456438 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0045643e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00456443
    FLD float ptr [EDI + 0x24]          ; 00456446
    MOV EAX,EBX                         ; 00456449
    FSTP float ptr [EBX + 0x4]          ; 0045644b
    MOV ESP,EBP                         ; 0045644e
    POP EBP                             ; 00456450
    POP EDI                             ; 00456451
    POP ESI                             ; 00456452
    POP EBX                             ; 00456453
    RET                                 ; 00456454

