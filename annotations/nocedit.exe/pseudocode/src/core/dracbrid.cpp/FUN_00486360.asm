; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_dracbrid.cpp_FUN_00486360()
;
; Local Variables:
; undefined1       Stack[-0x30]:1  local_30
; undefined1       Stack[-0x24]:1  local_24
; undefined1       Stack[-0x18]:1  local_18
;
; Referenced Globals:
;   undefined4 DAT_02c6d0a0
;   undefined4 DAT_02c6d0b4
;   undefined4 DAT_02c6d0bc
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486360
        ;   Label: core_dracbrid.cpp_FUN_00486360
    PUSH ESI                            ; 00486361
    PUSH EBP                            ; 00486362
    SUB ESP,0x24                        ; 00486363
    MOV ESI,dword ptr [ESP + 0x34]      ; 00486366
    MOV EBX,dword ptr [ESP + 0x38]      ; 0048636a
    CMP dword ptr [ESI + 0xbf48],0x0    ; 0048636e
    JZ 0x00486380                       ; 00486375 | LAB_00486380
        ;   XREF to: 00486380 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00486377
    ADD ESP,0x24                        ; 00486379
    POP EBP                             ; 0048637c
    POP ESI                             ; 0048637d
    POP EBX                             ; 0048637e
    RET                                 ; 0048637f
    PUSH EDI                            ; 00486380
        ;   Label: LAB_00486380
    MOV ECX,dword ptr [0x02c6d0a0]      ; 00486381 | undefined4 DAT_02c6d0a0
    PUSH ECX                            ; 00486387
    LEA EAX,[ESP + 0x14]                ; 00486388
    PUSH EAX                            ; 0048638c
    LEA EAX,[ESI + 0x158]               ; 0048638d
    PUSH EAX                            ; 00486393
    MOV EDI,0x3                         ; 00486394
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 00486399 | CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0048639e
    CMP EBX,EAX                         ; 004863a1
    JZ 0x004863b5                       ; 004863a3 | LAB_004863b5
        ;   XREF to: 004863b5 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EAX]             ; 004863a5
    MOV dword ptr [EBX],EDX             ; 004863a7
    MOV EDX,dword ptr [EAX + 0x4]       ; 004863a9
    MOV dword ptr [EBX + 0x4],EDX       ; 004863ac
    MOV EDX,dword ptr [EAX + 0x8]       ; 004863af
    MOV dword ptr [EBX + 0x8],EDX       ; 004863b2
    MOV EBP,dword ptr [0x02c6d0b4]      ; 004863b5 | undefined4 DAT_02c6d0b4
        ;   Label: LAB_004863b5
    PUSH EBP                            ; 004863bb
    LEA EAX,[ESP + 0x20]                ; 004863bc
    PUSH EAX                            ; 004863c0
    LEA EAX,[ESI + 0x158]               ; 004863c1
    PUSH EAX                            ; 004863c7
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004863c8 | CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
    LEA EDX,[EBX + 0xc]                 ; 004863cd
    ADD ESP,0xc                         ; 004863d0
    CMP EDX,EAX                         ; 004863d3
    JZ 0x004863e7                       ; 004863d5 | LAB_004863e7
        ;   XREF to: 004863e7 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EAX]             ; 004863d7
    MOV dword ptr [EDX],ECX             ; 004863d9
    MOV ECX,dword ptr [EAX + 0x4]       ; 004863db
    MOV dword ptr [EDX + 0x4],ECX       ; 004863de
    MOV ECX,dword ptr [EAX + 0x8]       ; 004863e1
    MOV dword ptr [EDX + 0x8],ECX       ; 004863e4
    MOV EAX,[0x02c6d0bc]                ; 004863e7 | undefined4 DAT_02c6d0bc
        ;   Label: LAB_004863e7
    PUSH EAX                            ; 004863ec
    LEA EAX,[ESP + 0x8]                 ; 004863ed
    PUSH EAX                            ; 004863f1
    ADD ESI,0x158                       ; 004863f2
    PUSH ESI                            ; 004863f8
    ADD EBX,0x18                        ; 004863f9
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004863fc | CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00486401
    CMP EBX,EAX                         ; 00486404
    JZ 0x00486418                       ; 00486406 | LAB_00486418
        ;   XREF to: 00486418 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EAX]             ; 00486408
    MOV dword ptr [EBX],EDX             ; 0048640a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048640c
    MOV dword ptr [EBX + 0x4],EDX       ; 0048640f
    MOV EDX,dword ptr [EAX + 0x8]       ; 00486412
    MOV dword ptr [EBX + 0x8],EDX       ; 00486415
    MOV EAX,EDI                         ; 00486418
        ;   Label: LAB_00486418
    POP EDI                             ; 0048641a
    ADD ESP,0x24                        ; 0048641b
    POP EBP                             ; 0048641e
    POP ESI                             ; 0048641f
    POP EBX                             ; 00486420
    RET                                 ; 00486421

