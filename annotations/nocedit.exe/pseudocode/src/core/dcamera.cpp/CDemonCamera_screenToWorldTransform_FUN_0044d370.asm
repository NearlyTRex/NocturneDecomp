; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __stack2_esi CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370 (CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   input_ptr
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[9]:
;   core_dcamera.cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060 at 0045422d
;   core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044e360 at 0044e44f
;   core_dcamera.cpp_CDemonCamera_screenToWorldRay_FUN_00452900 at 0045293e
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da30a
;   core_msnedit.cpp_CDemonMission_FUN_0053e220 at 0053e617
;   core_msnedit.cpp_FUN_00535c60 at 00535ca5
;   core_setedit.cpp_CDemonSet_FUN_0057fd00 at 0057fdf4
;   core_setedit.cpp_CDemonSet_FUN_005800d0 at 00580145
;   core_sound.cpp_updateListeners_FUN_005b1870 at 005b1d43
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044d370
        ;   Label: core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
    PUSH EDI                            ; 0044d371
    PUSH EBP                            ; 0044d372
    SUB ESP,0x1c                        ; 0044d373
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0044d376
    MOV dword ptr [ESP + 0x18],ESI      ; 0044d37a
    MOV ESI,dword ptr [ESP + 0x30]      ; 0044d37e
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044d382
    MOV dword ptr [ESP + 0x8],EAX       ; 0044d385
    MOV EAX,dword ptr [ESI]             ; 0044d389
    MOV EDX,dword ptr [EBP + 0x1c8]     ; 0044d38b
    MOV EBX,dword ptr [EBP + 0x1c0]     ; 0044d391
    SUB EAX,EDX                         ; 0044d397
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044d399
    LEA EDI,[EBP + 0x19c]               ; 0044d39d
    IMUL EDX                            ; 0044d3a3
    IDIV EBX                            ; 0044d3a5
    MOV dword ptr [ESP],EAX             ; 0044d3a7
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044d3aa
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044d3ae
    MOV ECX,dword ptr [EBP + 0x1cc]     ; 0044d3b1
    MOV EBX,dword ptr [EBP + 0x1c4]     ; 0044d3b7
    SUB EAX,ECX                         ; 0044d3bd
    MOV ESI,ESP                         ; 0044d3bf
    IMUL EDX                            ; 0044d3c1
    IDIV EBX                            ; 0044d3c3
    MOV dword ptr [ESP + 0x4],EAX       ; 0044d3c5
    MOV EAX,dword ptr [ESI]             ; 0044d3c9
    IMUL dword ptr [EDI]                ; 0044d3cb
    MOV EBX,EAX                         ; 0044d3cd
    MOV ECX,EDX                         ; 0044d3cf
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044d3d1
    IMUL dword ptr [EDI + 0xc]          ; 0044d3d4
    ADD EBX,EAX                         ; 0044d3d7
    ADC ECX,EDX                         ; 0044d3d9
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044d3db
    IMUL dword ptr [EDI + 0x18]         ; 0044d3de
    ADD EAX,EBX                         ; 0044d3e1
    ADC EDX,ECX                         ; 0044d3e3
    SHRD EAX,EDX,0x10                   ; 0044d3e5
    MOV EBX,dword ptr [EBP + 0x16c]     ; 0044d3e9
    MOV ESI,ESP                         ; 0044d3ef
    ADD EBX,EAX                         ; 0044d3f1
    LEA EDI,[EBP + 0x1a0]               ; 0044d3f3
    MOV dword ptr [ESP + 0xc],EBX       ; 0044d3f9
    MOV EAX,dword ptr [ESI]             ; 0044d3fd
    IMUL dword ptr [EDI]                ; 0044d3ff
    MOV EBX,EAX                         ; 0044d401
    MOV ECX,EDX                         ; 0044d403
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044d405
    IMUL dword ptr [EDI + 0xc]          ; 0044d408
    ADD EBX,EAX                         ; 0044d40b
    ADC ECX,EDX                         ; 0044d40d
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044d40f
    IMUL dword ptr [EDI + 0x18]         ; 0044d412
    ADD EAX,EBX                         ; 0044d415
    ADC EDX,ECX                         ; 0044d417
    SHRD EAX,EDX,0x10                   ; 0044d419
    MOV EBX,dword ptr [EBP + 0x170]     ; 0044d41d
    MOV ESI,ESP                         ; 0044d423
    ADD EBX,EAX                         ; 0044d425
    LEA EDI,[EBP + 0x1a4]               ; 0044d427
    MOV dword ptr [ESP + 0x10],EBX      ; 0044d42d
    MOV EAX,dword ptr [ESI]             ; 0044d431
    IMUL dword ptr [EDI]                ; 0044d433
    MOV EBX,EAX                         ; 0044d435
    MOV ECX,EDX                         ; 0044d437
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044d439
    IMUL dword ptr [EDI + 0xc]          ; 0044d43c
    ADD EBX,EAX                         ; 0044d43f
    ADC ECX,EDX                         ; 0044d441
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044d443
    IMUL dword ptr [EDI + 0x18]         ; 0044d446
    ADD EAX,EBX                         ; 0044d449
    ADC EDX,ECX                         ; 0044d44b
    SHRD EAX,EDX,0x10                   ; 0044d44d
    MOV EBX,dword ptr [EBP + 0x174]     ; 0044d451
    MOV EDI,dword ptr [ESP + 0x18]      ; 0044d457
    ADD EBX,EAX                         ; 0044d45b
    LEA ESI,[ESP + 0xc]                 ; 0044d45d
    MOV dword ptr [ESP + 0x14],EBX      ; 0044d461
    MOVSD ES:EDI,ESI                    ; 0044d465
    MOVSD ES:EDI,ESI                    ; 0044d466
    MOVSD ES:EDI,ESI                    ; 0044d467
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044d468
    ADD ESP,0x1c                        ; 0044d46c
    POP EBP                             ; 0044d46f
    POP EDI                             ; 0044d470
    POP EBX                             ; 0044d471
    RET                                 ; 0044d472

