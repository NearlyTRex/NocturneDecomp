; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_zombie_cpp_FUN_005621f0(int param_1,CVector3f *param_2)
;
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x54]:1  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   undefined1* switchdataD_005621d8 = 0056225d
;   double DOUBLE_00598986 = 0.5
;   double DOUBLE_0059898e = 0.700000000000000
;   double DOUBLE_00598996 = 0.300000000000000
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005621f0
        ;   Label: core_zombie.cpp_FUN_005621f0
    PUSH ESI                            ; 005621f1
    PUSH EDI                            ; 005621f2
    PUSH EBP                            ; 005621f3
    MOV EBP,ESP                         ; 005621f4
    SUB ESP,0x4c                        ; 005621f6
    AND ESP,0xfffffff8                  ; 005621f9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005621fc
    MOV EDX,dword ptr [EBX + 0xbdd8]    ; 005621ff
    PUSH EDX                            ; 00562205
    LEA EAX,[ESP + 0x34]                ; 00562206
    PUSH EAX                            ; 0056220a
    LEA EAX,[EBX + 0x150]               ; 0056220b
    PUSH EAX                            ; 00562211
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 00562212
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00562217
    LEA EAX,[ESP + 0x30]                ; 0056221a
    MOV ECX,dword ptr [EBP + 0x18]      ; 0056221e
    CMP EAX,ECX                         ; 00562221
    JNZ 0x0056231a                      ; 00562223
        ;   XREF to: 0056231a (CONDITIONAL_JUMP)  ; LAB_0056231a
    XOR EDI,EDI                         ; 00562229
        ;   Label: LAB_00562229
    MOV ESI,0x1                         ; 0056222b
    MOV dword ptr [ESP + 0x48],EDI      ; 00562230
    LEA EDI,[EBX + 0x150]               ; 00562234
    MOV EDX,dword ptr [ESP + 0x48]      ; 0056223a
        ;   Label: LAB_0056223a
    ADD EDX,dword ptr [EBX + 0x6c]      ; 0056223e
    MOV ECX,0x4                         ; 00562241
    MOV EAX,EDX                         ; 00562246
    SAR EDX,0x1f                        ; 00562248
    IDIV ECX                            ; 0056224b
    CMP EDX,0x3                         ; 0056224d
    JA 0x005622ff                       ; 00562250
        ;   XREF to: 005622ff (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x5621d8]  ; 00562256 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xbde0]    ; 0056225d
        ;   Label: caseD_0
    CMP dword ptr [EBX + EAX*0x4 + 0x2290],0x0 ; 00562263
    JZ 0x005622ff                       ; 0056226b
        ;   XREF to: 005622ff (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBX + 0xbdc8]    ; 00562271
    PUSH ECX                            ; 00562277
    LEA EAX,[ESP + 0x40]                ; 00562278
    PUSH EAX                            ; 0056227c
        ;   Label: LAB_0056227c
    PUSH EDI                            ; 0056227d
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 0056227e
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV EDX,EAX                         ; 00562283
    LEA EAX,[ESP + 0x24]                ; 00562285
    ADD ESP,0xc                         ; 00562289
    CMP EAX,EDX                         ; 0056228c
    JZ 0x005622a4                       ; 0056228e
        ;   XREF to: 005622a4 (CONDITIONAL_JUMP)  ; LAB_005622a4
    MOV EAX,dword ptr [EDX]             ; 00562290
    MOV dword ptr [ESP + 0x18],EAX      ; 00562292
    MOV EAX,dword ptr [EDX + 0x4]       ; 00562296
    MOV dword ptr [ESP + 0x1c],EAX      ; 00562299
    MOV EAX,dword ptr [EDX + 0x8]       ; 0056229d
    MOV dword ptr [ESP + 0x20],EAX      ; 005622a0
    IMUL EDX,ESI,0xc                    ; 005622a4
        ;   Label: LAB_005622a4
    FLD double ptr [0x00598986]         ; 005622a7 | DOUBLE_00598986
    FLD float ptr [ESP + 0x18]          ; 005622ad
    FMUL ST1                            ; 005622b1
    FLD float ptr [ESP + 0x1c]          ; 005622b3
    FMUL double ptr [0x0059898e]        ; 005622b7 | DOUBLE_0059898e
    FLD float ptr [ESP + 0x30]          ; 005622bd
    FMULP ST3                           ; 005622c1
    FLD float ptr [ESP + 0x34]          ; 005622c3
    FMUL double ptr [0x00598996]        ; 005622c7 | DOUBLE_00598996
    MOV EAX,dword ptr [EBP + 0x18]      ; 005622cd
    FADDP                               ; 005622d0
    FXCH ST2                            ; 005622d2
    FADDP                               ; 005622d4
    FXCH                                ; 005622d6
    FSTP float ptr [ESP + 0x1c]         ; 005622d8
    ADD EDX,EAX                         ; 005622dc
    LEA EAX,[ESP + 0x18]                ; 005622de
    FSTP float ptr [ESP + 0x18]         ; 005622e2
    CMP EDX,EAX                         ; 005622e6
    JZ 0x005622fe                       ; 005622e8
        ;   XREF to: 005622fe (CONDITIONAL_JUMP)  ; LAB_005622fe
    MOV EAX,dword ptr [ESP + 0x18]      ; 005622ea
    MOV dword ptr [EDX],EAX             ; 005622ee
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005622f0
    MOV dword ptr [EDX + 0x4],EAX       ; 005622f4
    MOV EAX,dword ptr [ESP + 0x20]      ; 005622f7
    MOV dword ptr [EDX + 0x8],EAX       ; 005622fb
    INC ESI                             ; 005622fe
        ;   Label: LAB_005622fe
    MOV EDX,dword ptr [ESP + 0x48]      ; 005622ff
        ;   Label: default
    INC EDX                             ; 00562303
    MOV dword ptr [ESP + 0x48],EDX      ; 00562304
    CMP EDX,0x4                         ; 00562308
    JL 0x0056223a                       ; 0056230b
        ;   XREF to: 0056223a (CONDITIONAL_JUMP)  ; LAB_0056223a
    MOV EAX,ESI                         ; 00562311
    MOV ESP,EBP                         ; 00562313
    POP EBP                             ; 00562315
    POP EDI                             ; 00562316
    POP ESI                             ; 00562317
    POP EBX                             ; 00562318
    RET                                 ; 00562319
    MOV EAX,dword ptr [ESP + 0x30]      ; 0056231a
        ;   Label: LAB_0056231a
    MOV dword ptr [ECX],EAX             ; 0056231e
    MOV EAX,dword ptr [ESP + 0x34]      ; 00562320
    MOV dword ptr [ECX + 0x4],EAX       ; 00562324
    MOV EAX,dword ptr [ESP + 0x38]      ; 00562327
    MOV dword ptr [ECX + 0x8],EAX       ; 0056232b
    JMP 0x00562229                      ; 0056232e
        ;   XREF to: 00562229 (UNCONDITIONAL_JUMP)  ; LAB_00562229
    MOV EAX,dword ptr [EBX + 0xbde8]    ; 00562333
        ;   Label: caseD_1
    CMP dword ptr [EBX + EAX*0x4 + 0x2290],0x0 ; 00562339
    JZ 0x005622ff                       ; 00562341
        ;   XREF to: 005622ff (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBX + 0xbdcc]    ; 00562343
    PUSH ECX                            ; 00562349
    LEA EAX,[ESP + 0x10]                ; 0056234a
    JMP 0x0056227c                      ; 0056234e
        ;   XREF to: 0056227c (UNCONDITIONAL_JUMP)  ; LAB_0056227c
    MOV EAX,dword ptr [EBX + 0xbdf8]    ; 00562353
        ;   Label: caseD_2
    CMP dword ptr [EBX + EAX*0x4 + 0x2290],0x0 ; 00562359
    JZ 0x005622ff                       ; 00562361
        ;   XREF to: 005622ff (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBX + 0xbdb4]    ; 00562363
    PUSH ECX                            ; 00562369
    LEA EAX,[ESP + 0x28]                ; 0056236a
    PUSH EAX                            ; 0056236e
    PUSH EDI                            ; 0056236f
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 00562370
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    IMUL EDX,ESI,0xc                    ; 00562375
    ADD ESP,0xc                         ; 00562378
    ADD EDX,dword ptr [EBP + 0x18]      ; 0056237b
    CMP EDX,EAX                         ; 0056237e
    JZ 0x005622fe                       ; 00562380
        ;   XREF to: 005622fe (CONDITIONAL_JUMP)  ; LAB_005622fe
    MOV ECX,dword ptr [EAX]             ; 00562386
    MOV dword ptr [EDX],ECX             ; 00562388
    MOV ECX,dword ptr [EAX + 0x4]       ; 0056238a
    MOV dword ptr [EDX + 0x4],ECX       ; 0056238d
    MOV ECX,dword ptr [EAX + 0x8]       ; 00562390
    MOV dword ptr [EDX + 0x8],ECX       ; 00562393
    JMP 0x005622fe                      ; 00562396
        ;   XREF to: 005622fe (UNCONDITIONAL_JUMP)  ; LAB_005622fe
    MOV EAX,dword ptr [EBX + 0xbdf4]    ; 0056239b
        ;   Label: caseD_3
    CMP dword ptr [EBX + EAX*0x4 + 0x2290],0x0 ; 005623a1
    JZ 0x005622ff                       ; 005623a9
        ;   XREF to: 005622ff (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBX + 0xbddc]    ; 005623af
    PUSH ECX                            ; 005623b5
    LEA EAX,[ESP + 0x4]                 ; 005623b6
    PUSH EAX                            ; 005623ba
    PUSH EDI                            ; 005623bb
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 005623bc
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    IMUL EDX,ESI,0xc                    ; 005623c1
    ADD ESP,0xc                         ; 005623c4
    ADD EDX,dword ptr [EBP + 0x18]      ; 005623c7
    CMP EDX,EAX                         ; 005623ca
    JZ 0x005622fe                       ; 005623cc
        ;   XREF to: 005622fe (CONDITIONAL_JUMP)  ; LAB_005622fe
    MOV ECX,dword ptr [EAX]             ; 005623d2
    MOV dword ptr [EDX],ECX             ; 005623d4
    MOV ECX,dword ptr [EAX + 0x4]       ; 005623d6
    MOV dword ptr [EDX + 0x4],ECX       ; 005623d9
    MOV ECX,dword ptr [EAX + 0x8]       ; 005623dc
    MOV dword ptr [EDX + 0x8],ECX       ; 005623df
    JMP 0x005622fe                      ; 005623e2
        ;   XREF to: 005622fe (UNCONDITIONAL_JUMP)  ; LAB_005622fe

