; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_FUN_0049d2c0(CFireEffect *this_ptr,CVector3f *impact_position,CVector3f *orientation_angles,CVector3f *surface_normal,int ground_type)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   impact_position
; CVector3f *      Stack[0xc]:4   orientation_angles
; CVector3f *      Stack[0x10]:4   surface_normal
; int              Stack[0x14]:4   ground_type
; Local Variables:
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[1]:
;   core_crossbow.cpp_FUN_0043a7a0 at 0043ae01
;
; Referenced Globals:
;   undefined1* switchdataD_0049d288 = 0049d2e0
;   TerminatedCString s_a_wood_wav_005d57c2
;   undefined4 DAT_0061c068
;   undefined4 DAT_01c594e8
;   undefined4 DAT_01c594ec
;
; Called Functions:
;   core_dirmat.cpp_FUN_00449280
;   core_dirmat.cpp_FUN_00449530
;   core_fire.cpp_CStake_init_FUN_00494150
;   core_fire.cpp_CStake_spawn_FUN_004941c0
;   core_sound.cpp_FUN_0055aef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d2c0
        ;   Label: core_fire.cpp_FUN_0049d2c0
    PUSH ESI                            ; 0049d2c1
    PUSH EDI                            ; 0049d2c2
    PUSH EBP                            ; 0049d2c3
    SUB ESP,0x64                        ; 0049d2c4
    MOV EBP,dword ptr [ESP + 0x7c]      ; 0049d2c7
    MOV EAX,dword ptr [ESP + 0x88]      ; 0049d2cb
    XOR EBX,EBX                         ; 0049d2d2
    CMP EAX,0xa                         ; 0049d2d4
    JA 0x0049d2e5                       ; 0049d2d7
        ;   XREF to: 0049d2e5 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x49d288]  ; 0049d2d9 | caseD_8 | caseD_a | caseD_6
        ;   Label: switchD
    MOV EBX,0x1                         ; 0049d2e0
        ;   Label: caseD_0
    MOV EDX,dword ptr [ESP + 0x80]      ; 0049d2e5
        ;   Label: default
    PUSH EDX                            ; 0049d2ec
    LEA EAX,[ESP + 0x4]                 ; 0049d2ed
    PUSH EAX                            ; 0049d2f1
    MOV EDI,0x3f333333                  ; 0049d2f2
    LEA ESI,[ESP + 0x30]                ; 0049d2f7
    CALL core_dirmat.cpp_FUN_00449280   ; 0049d2fb
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0049d300
    XOR ECX,ECX                         ; 0049d303
    LEA EAX,[ESP + 0x4c]                ; 0049d305
    MOV dword ptr [ESP + 0x4c],ECX      ; 0049d309
    PUSH EAX                            ; 0049d30d
    LEA EAX,[ESP + 0x4]                 ; 0049d30e
    MOV dword ptr [ESP + 0x54],ECX      ; 0049d312
    PUSH EAX                            ; 0049d316
    MOV dword ptr [ESP + 0x5c],EDI      ; 0049d317
    LEA EDI,[ESP + 0x48]                ; 0049d31b
    CALL core_dirmat.cpp_FUN_00449530   ; 0049d31f
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x30]                ; 0049d324
    ADD ESP,0x8                         ; 0049d328
    MOVSD ES:EDI,ESI                    ; 0049d32b
    MOVSD ES:EDI,ESI                    ; 0049d32c
    MOVSD ES:EDI,ESI                    ; 0049d32d
    FLD float ptr [EBP]                 ; 0049d32e
    FLD float ptr [EBP + 0x4]           ; 0049d331
    FLD float ptr [EBP + 0x8]           ; 0049d334
    LEA EDI,[ESP + 0x58]                ; 0049d337
    LEA ESI,[ESP + 0x34]                ; 0049d33b
    FXCH ST2                            ; 0049d33f
    FSUB float ptr [ESP + 0x40]         ; 0049d341
    FXCH                                ; 0049d345
    FSUB float ptr [ESP + 0x44]         ; 0049d347
    FXCH ST2                            ; 0049d34b
    FSUB float ptr [ESP + 0x48]         ; 0049d34d
    FXCH                                ; 0049d351
    FSTP float ptr [ESP + 0x34]         ; 0049d353
    FXCH                                ; 0049d357
    FSTP float ptr [ESP + 0x38]         ; 0049d359
    FSTP float ptr [ESP + 0x3c]         ; 0049d35d
    MOVSD ES:EDI,ESI                    ; 0049d361
    MOVSD ES:EDI,ESI                    ; 0049d362
    MOVSD ES:EDI,ESI                    ; 0049d363
    TEST EBX,EBX                        ; 0049d364
    JZ 0x0049d3da                       ; 0049d366
        ;   XREF to: 0049d3da (CONDITIONAL_JUMP)  ; LAB_0049d3da
    MOV ECX,dword ptr [ESP + 0x84]      ; 0049d368
    PUSH ECX                            ; 0049d36f
    MOV EBX,dword ptr [ESP + 0x84]      ; 0049d370
    PUSH EBX                            ; 0049d377
    LEA EAX,[ESP + 0x60]                ; 0049d378
    MOV EDX,dword ptr [0x01c594ec]      ; 0049d37c | DAT_01c594ec
    PUSH EAX                            ; 0049d382
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049d383
    ADD EAX,EDX                         ; 0049d38a
    SHL EAX,0x2                         ; 0049d38c
    SUB EAX,EDX                         ; 0049d38f
    SHL EAX,0x5                         ; 0049d391
    ADD EAX,0x1c594f0                   ; 0049d394
    PUSH EAX                            ; 0049d399
    CALL core_fire.cpp_CStake_spawn_FUN_004941c0 ; 0049d39a
        ;   XREF to: 004941c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CStake_spawn_FUN_004941c0(CStake * this_ptr, CVector3f * spawn_position, CVector3f * orientation_angles, CVector3f * surface_normal)
    ADD ESP,0x10                        ; 0049d39f
    MOV ESI,dword ptr [0x01c594ec]      ; 0049d3a2 | DAT_01c594ec
        ;   Label: LAB_0049d3a2
    INC ESI                             ; 0049d3a8
    MOV dword ptr [0x01c594ec],ESI      ; 0049d3a9 | DAT_01c594ec
    CMP ESI,0x100                       ; 0049d3af
    JL 0x0049d3bf                       ; 0049d3b5
        ;   XREF to: 0049d3bf (CONDITIONAL_JUMP)  ; LAB_0049d3bf
    XOR EBP,EBP                         ; 0049d3b7
    MOV dword ptr [0x01c594ec],EBP      ; 0049d3b9 | DAT_01c594ec
    MOV EAX,[0x01c594e8]                ; 0049d3bf | DAT_01c594e8
        ;   Label: LAB_0049d3bf
    CMP EAX,0x100                       ; 0049d3c4
    JL 0x0049d436                       ; 0049d3c9
        ;   XREF to: 0049d436 (CONDITIONAL_JUMP)  ; LAB_0049d436
    ADD ESP,0x64                        ; 0049d3cb
        ;   Label: caseD_6
    POP EBP                             ; 0049d3ce
    POP EDI                             ; 0049d3cf
    POP ESI                             ; 0049d3d0
    POP EBX                             ; 0049d3d1
    RET                                 ; 0049d3d2
    XOR EBX,EBX                         ; 0049d3d3
        ;   Label: caseD_3
    JMP 0x0049d2e5                      ; 0049d3d5
        ;   XREF to: 0049d2e5 (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[ESP + 0x58]                ; 0049d3da
        ;   Label: LAB_0049d3da
    PUSH 0x3e6b851f                     ; 0049d3de
    PUSH EAX                            ; 0049d3e3
    PUSH 0x5d57c2                       ; 0049d3e4 | = "a-wood?.wav"
    MOV EBP,dword ptr [ESP + 0x84]      ; 0049d3e9
    PUSH EBP                            ; 0049d3f0
    MOV EAX,[0x0061c068]                ; 0049d3f1 | DAT_0061c068
    PUSH EAX                            ; 0049d3f6
    CALL core_sound.cpp_FUN_0055aef0    ; 0049d3f7
        ;   XREF to: 0055aef0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_FUN_0055aef0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position, ...)
    ADD ESP,0x14                        ; 0049d3fc
    MOV EDX,dword ptr [ESP + 0x80]      ; 0049d3ff
    PUSH EDX                            ; 0049d406
    LEA EAX,[ESP + 0x5c]                ; 0049d407
    MOV EDX,dword ptr [0x01c594ec]      ; 0049d40b | DAT_01c594ec
    PUSH EAX                            ; 0049d411
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049d412
    ADD EAX,EDX                         ; 0049d419
    SHL EAX,0x2                         ; 0049d41b
    SUB EAX,EDX                         ; 0049d41e
    SHL EAX,0x5                         ; 0049d420
    ADD EAX,0x1c594f0                   ; 0049d423
    PUSH EAX                            ; 0049d428
    CALL core_fire.cpp_CStake_init_FUN_00494150 ; 0049d429
        ;   XREF to: 00494150 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CStake_init_FUN_00494150(CStake * this_ptr, CVector3f * position, CVector3f * orientation)
    ADD ESP,0xc                         ; 0049d42e
    JMP 0x0049d3a2                      ; 0049d431
        ;   XREF to: 0049d3a2 (UNCONDITIONAL_JUMP)  ; LAB_0049d3a2
    LEA EDX,[EAX + 0x1]                 ; 0049d436
        ;   Label: LAB_0049d436
    MOV dword ptr [0x01c594e8],EDX      ; 0049d439 | DAT_01c594e8
    ADD ESP,0x64                        ; 0049d43f
    POP EBP                             ; 0049d442
    POP EDI                             ; 0049d443
    POP ESI                             ; 0049d444
    POP EBX                             ; 0049d445
    RET                                 ; 0049d446

