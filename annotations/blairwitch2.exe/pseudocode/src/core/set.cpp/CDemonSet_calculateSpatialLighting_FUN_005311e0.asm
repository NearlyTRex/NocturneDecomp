; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   world_position
; CVector3i *      Stack[0xc]:4   surface_normal
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_set.cpp_CDemonSet_lightVertexColor_FUN_00531460 at 00531608
;   core_set.cpp_FUN_0052fad0 at 0052fd50
;   core_set.cpp_FUN_0052fea0 at 00530111
;   core_shadow.cpp_FUN_0053c500 at 0053cadb
;
; Referenced Globals:
;   undefined4 DAT_01fc9608
;   undefined4 DAT_0200a398
;   undefined4 DAT_0200a39c
;   undefined4 DAT_0200a3a0
;   undefined4 DAT_0200e23c
;   undefined4 DAT_0200e240
;   undefined4 DAT_0200e3c0
;   undefined4 DAT_0200e3c4
;   undefined4 DAT_0200e3d4
;   undefined4 DAT_0200e3d8
;   undefined4 DAT_0200e3dc
;   undefined4 DAT_0200e88c
;   undefined4 DAT_0200e890
;   undefined4 DAT_0200e89c
;   undefined4 DAT_0200e8a8
;   ... and 2 more
;
; Called Functions:
;   core_dcamera.cpp_FUN_0043e300
;   core_dglobe.cpp_FUN_00448da0
;   core_mirror.cpp_FUN_004fb0a0
;   core_mirror.cpp_FUN_004fb150
;   core_set.cpp_CDemonSet_gatherVisibleLights_FUN_00530aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005311e0
        ;   Label: core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_005311e0
    PUSH ESI                            ; 005311e1
    PUSH EDI                            ; 005311e2
    PUSH EBP                            ; 005311e3
    SUB ESP,0x38                        ; 005311e4
    MOV EBP,dword ptr [ESP + 0x54]      ; 005311e7
    MOV EDX,dword ptr [0x0200e88c]      ; 005311eb | DAT_0200e88c
    TEST EDX,EDX                        ; 005311f1
    JZ 0x0053121d                       ; 005311f3
        ;   XREF to: 0053121d (CONDITIONAL_JUMP)  ; LAB_0053121d
    CMP EDX,0x1                         ; 005311f5
    JNZ 0x005313ef                      ; 005311f8
        ;   XREF to: 005313ef (CONDITIONAL_JUMP)  ; LAB_005313ef
    PUSH 0x0                            ; 005311fe
    PUSH 0x0                            ; 00531200
    PUSH 0x0                            ; 00531202
    PUSH 0x0                            ; 00531204
    PUSH 0x0                            ; 00531206
    MOV ESI,dword ptr [ESP + 0x60]      ; 00531208
    PUSH ESI                            ; 0053120c
    CALL core_set.cpp_CDemonSet_gatherVisibleLights_FUN_00530aa0 ; 0053120d
        ;   XREF to: 00530aa0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_gatherVisibleLights_FUN_00530aa0(CDemonSet * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * aabb_min, ...)
        ;   Label: LAB_0053120d
    ADD ESP,0x18                        ; 00531212
    XOR EDI,EDI                         ; 00531215
    MOV dword ptr [0x0200e88c],EDI      ; 00531217 | DAT_0200e88c
    MOV EAX,[0x0200e3c0]                ; 0053121d | DAT_0200e3c0
        ;   Label: LAB_0053121d
    XOR ESI,ESI                         ; 00531222
    XOR EBX,EBX                         ; 00531224
    TEST EAX,EAX                        ; 00531226
    JLE 0x00531260                      ; 00531228
        ;   XREF to: 00531260 (CONDITIONAL_JUMP)  ; LAB_00531260
    XOR EDI,EDI                         ; 0053122a
    PUSH EBP                            ; 0053122c
        ;   Label: LAB_0053122c
    MOV EDX,dword ptr [EDI + 0x200e3c4] ; 0053122d | DAT_0200e3c4
    PUSH EDX                            ; 00531233
    MOV ECX,dword ptr [ESP + 0x58]      ; 00531234
    PUSH ECX                            ; 00531238
    PUSH 0x1fc7838                      ; 00531239
    ADD EDI,0x4                         ; 0053123e
    INC ESI                             ; 00531241
    CALL core_dcamera.cpp_FUN_0043e300  ; 00531242
        ;   XREF to: 0043e300 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0043e300()
    ADD EBX,EAX                         ; 00531247
    MOV EAX,[0x0200e3c0]                ; 00531249 | DAT_0200e3c0
    ADD ESP,0x10                        ; 0053124e
    CMP ESI,EAX                         ; 00531251
    JL 0x0053122c                       ; 00531253
        ;   XREF to: 0053122c (CONDITIONAL_JUMP)  ; LAB_0053122c
    LEA EAX,[EAX]                       ; 00531255
    LEA EDX,[EDX]                       ; 0053125b
    MOV EBX,EBX                         ; 0053125e
    MOV EDX,dword ptr [0x0200e23c]      ; 00531260 | DAT_0200e23c
        ;   Label: LAB_00531260
    XOR EDI,EDI                         ; 00531266
    TEST EDX,EDX                        ; 00531268
    JLE 0x005312a0                      ; 0053126a
        ;   XREF to: 005312a0 (CONDITIONAL_JUMP)  ; LAB_005312a0
    XOR ESI,ESI                         ; 0053126c
    PUSH EBP                            ; 0053126e
        ;   Label: LAB_0053126e
    MOV ECX,dword ptr [ESI + 0x200e240] ; 0053126f | DAT_0200e240
    PUSH ECX                            ; 00531275
    MOV EAX,dword ptr [ESP + 0x58]      ; 00531276
    PUSH EAX                            ; 0053127a
    PUSH 0x1fc7838                      ; 0053127b
    ADD ESI,0x4                         ; 00531280
    INC EDI                             ; 00531283
    CALL core_dcamera.cpp_FUN_0043e300  ; 00531284
        ;   XREF to: 0043e300 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0043e300()
    MOV EDX,dword ptr [0x0200e23c]      ; 00531289 | DAT_0200e23c
    ADD ESP,0x10                        ; 0053128f
    ADD EBX,EAX                         ; 00531292
    CMP EDI,EDX                         ; 00531294
    JL 0x0053126e                       ; 00531296
        ;   XREF to: 0053126e (CONDITIONAL_JUMP)  ; LAB_0053126e
    LEA EAX,[EAX]                       ; 00531298
    MOV EDX,EDX                         ; 0053129e
    MOV ECX,dword ptr [0x0200e3d4]      ; 005312a0 | DAT_0200e3d4
        ;   Label: LAB_005312a0
    XOR ESI,ESI                         ; 005312a6
    TEST ECX,ECX                        ; 005312a8
    JLE 0x005312e0                      ; 005312aa
        ;   XREF to: 005312e0 (CONDITIONAL_JUMP)  ; LAB_005312e0
    XOR EDI,EDI                         ; 005312ac
    PUSH EBP                            ; 005312ae
        ;   Label: LAB_005312ae
    MOV EAX,dword ptr [ESP + 0x54]      ; 005312af
    PUSH EAX                            ; 005312b3
    MOV EDX,dword ptr [EDI + 0x200e3d8] ; 005312b4 | DAT_0200e3d8 | DAT_0200e3dc
    PUSH EDX                            ; 005312ba
    ADD EDI,0x4                         ; 005312bb
    INC ESI                             ; 005312be
    CALL core_dglobe.cpp_FUN_00448da0   ; 005312bf
        ;   XREF to: 00448da0 (UNCONDITIONAL_CALL)  ; undefined core_dglobe.cpp_FUN_00448da0()
    MOV ECX,dword ptr [0x0200e3d4]      ; 005312c4 | DAT_0200e3d4
    ADD ESP,0xc                         ; 005312ca
    ADD EBX,EAX                         ; 005312cd
    CMP ESI,ECX                         ; 005312cf
    JL 0x005312ae                       ; 005312d1
        ;   XREF to: 005312ae (CONDITIONAL_JUMP)  ; LAB_005312ae
    LEA EAX,[EAX]                       ; 005312d3
    LEA EDX,[EDX]                       ; 005312d9
    NOP                                 ; 005312df
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005312e0
        ;   Label: LAB_005312e0
    TEST dword ptr [EAX + 0x14d160],0x7fffffff ; 005312e4
    JZ 0x0053132c                       ; 005312ee
        ;   XREF to: 0053132c (CONDITIONAL_JUMP)  ; LAB_0053132c
    TEST EBP,EBP                        ; 005312f0
    JZ 0x0053132c                       ; 005312f2
        ;   XREF to: 0053132c (CONDITIONAL_JUMP)  ; LAB_0053132c
    MOV EAX,[0x0200a398]                ; 005312f4 | DAT_0200a398
    MOV EDX,dword ptr [EBP]             ; 005312f9
    IMUL EDX                            ; 005312fc
    SHRD EAX,EDX,0x10                   ; 005312fe
    MOV ESI,EAX                         ; 00531302
    MOV EDX,dword ptr [EBP + 0x4]       ; 00531304
    MOV EAX,[0x0200a39c]                ; 00531307 | DAT_0200a39c
    IMUL EDX                            ; 0053130c
    SHRD EAX,EDX,0x10                   ; 0053130e
    MOV EDX,dword ptr [EBP + 0x8]       ; 00531312
    ADD ESI,EAX                         ; 00531315
    MOV EAX,[0x0200a3a0]                ; 00531317 | DAT_0200a3a0
    IMUL EDX                            ; 0053131c
    SHRD EAX,EDX,0x10                   ; 0053131e
    ADD EAX,ESI                         ; 00531322
    TEST EAX,EAX                        ; 00531324
    JL 0x00531412                       ; 00531326
        ;   XREF to: 00531412 (CONDITIONAL_JUMP)  ; LAB_00531412
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0053132c
        ;   Label: LAB_0053132c
    XOR EDI,EDI                         ; 00531330
    MOV EDX,dword ptr [EAX + 0x15acc8]  ; 00531332
    MOV dword ptr [ESP + 0x30],EDI      ; 00531338
    TEST EDX,EDX                        ; 0053133c
    JLE 0x005313e5                      ; 0053133e
        ;   XREF to: 005313e5 (CONDITIONAL_JUMP)  ; LAB_005313e5
    MOV dword ptr [ESP + 0x34],EAX      ; 00531344
    MOV EAX,dword ptr [ESP + 0x50]      ; 00531348
        ;   Label: LAB_00531348
    PUSH EAX                            ; 0053134c
    MOV EAX,dword ptr [ESP + 0x38]      ; 0053134d
    MOV EAX,dword ptr [EAX + 0x15accc]  ; 00531351
    ADD EAX,0x348                       ; 00531357
    PUSH EAX                            ; 0053135c
    LEA ESI,[ESP + 0x8]                 ; 0053135d
    LEA EDI,[ESP + 0x14]                ; 00531361
    CALL core_mirror.cpp_FUN_004fb0a0   ; 00531365
        ;   XREF to: 004fb0a0 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_FUN_004fb0a0()
    LEA ESI,[ESP + 0x8]                 ; 0053136a
    ADD ESP,0x8                         ; 0053136e
    MOVSD ES:EDI,ESI                    ; 00531371
    MOVSD ES:EDI,ESI                    ; 00531372
    MOVSD ES:EDI,ESI                    ; 00531373
    TEST EBP,EBP                        ; 00531374
    JNZ 0x00531419                      ; 00531376
        ;   XREF to: 00531419 (CONDITIONAL_JUMP)  ; LAB_00531419
    MOV ECX,dword ptr [0x01fc9608]      ; 0053137c | DAT_01fc9608
        ;   Label: LAB_0053137c
    XOR EDI,EDI                         ; 00531382
    TEST ECX,ECX                        ; 00531384
    JLE 0x005313bf                      ; 00531386
        ;   XREF to: 005313bf (CONDITIONAL_JUMP)  ; LAB_005313bf
    XOR ESI,ESI                         ; 00531388
    TEST EBP,EBP                        ; 0053138a
        ;   Label: LAB_0053138a
    JZ 0x0053144b                       ; 0053138c
        ;   XREF to: 0053144b (CONDITIONAL_JUMP)  ; LAB_0053144b
    LEA EAX,[ESP + 0x18]                ; 00531392
    PUSH EAX                            ; 00531396
    MOV ECX,dword ptr [ESI + 0x1fc960c] ; 00531397
    PUSH ECX                            ; 0053139d
    LEA EAX,[ESP + 0x14]                ; 0053139e
        ;   Label: LAB_0053139e
    PUSH EAX                            ; 005313a2
    PUSH 0x1fc7838                      ; 005313a3
    CALL core_dcamera.cpp_FUN_0043e300  ; 005313a8
        ;   XREF to: 0043e300 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0043e300()
    ADD ESP,0x10                        ; 005313ad
    ADD EBX,EAX                         ; 005313b0
    MOV EAX,[0x01fc9608]                ; 005313b2 | DAT_01fc9608
    INC EDI                             ; 005313b7
    ADD ESI,0x4                         ; 005313b8
    CMP EDI,EAX                         ; 005313bb
    JL 0x0053138a                       ; 005313bd
        ;   XREF to: 0053138a (CONDITIONAL_JUMP)  ; LAB_0053138a
    MOV ECX,dword ptr [ESP + 0x34]      ; 005313bf
        ;   Label: LAB_005313bf
    MOV ESI,dword ptr [ESP + 0x30]      ; 005313c3
    MOV EDX,dword ptr [ESP + 0x4c]      ; 005313c7
    ADD ECX,0x4                         ; 005313cb
    INC ESI                             ; 005313ce
    MOV EDI,dword ptr [EDX + 0x15acc8]  ; 005313cf
    MOV dword ptr [ESP + 0x34],ECX      ; 005313d5
    MOV dword ptr [ESP + 0x30],ESI      ; 005313d9
    CMP ESI,EDI                         ; 005313dd
    JL 0x00531348                       ; 005313df
        ;   XREF to: 00531348 (CONDITIONAL_JUMP)  ; LAB_00531348
    MOV EAX,EBX                         ; 005313e5
        ;   Label: LAB_005313e5
    ADD ESP,0x38                        ; 005313e7
    POP EBP                             ; 005313ea
    POP EDI                             ; 005313eb
    POP ESI                             ; 005313ec
    POP EBX                             ; 005313ed
    RET                                 ; 005313ee
    PUSH 0x200e8c0                      ; 005313ef | DAT_0200e8c0
        ;   Label: LAB_005313ef
    PUSH 0x200e8b4                      ; 005313f4 | DAT_0200e8b4
    PUSH 0x200e8a8                      ; 005313f9 | DAT_0200e8a8
    PUSH 0x200e89c                      ; 005313fe | DAT_0200e89c
    PUSH 0x200e890                      ; 00531403 | DAT_0200e890
    MOV EBX,dword ptr [ESP + 0x60]      ; 00531408
    PUSH EBX                            ; 0053140c
    JMP 0x0053120d                      ; 0053140d
        ;   XREF to: 0053120d (UNCONDITIONAL_JUMP)  ; LAB_0053120d
    SUB EBX,EAX                         ; 00531412
        ;   Label: LAB_00531412
    JMP 0x0053132c                      ; 00531414
        ;   XREF to: 0053132c (UNCONDITIONAL_JUMP)  ; LAB_0053132c
    MOV EAX,dword ptr [ESP + 0x34]      ; 00531419
        ;   Label: LAB_00531419
    PUSH EBP                            ; 0053141d
    MOV EDX,dword ptr [ESP + 0x54]      ; 0053141e
    MOV EAX,dword ptr [EAX + 0x15accc]  ; 00531422
    PUSH EDX                            ; 00531428
    ADD EAX,0x348                       ; 00531429
    PUSH EAX                            ; 0053142e
    LEA ESI,[ESP + 0x30]                ; 0053142f
    LEA EDI,[ESP + 0x24]                ; 00531433
    CALL core_mirror.cpp_FUN_004fb150   ; 00531437
        ;   XREF to: 004fb150 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_FUN_004fb150()
    LEA ESI,[ESP + 0x30]                ; 0053143c
    ADD ESP,0xc                         ; 00531440
    MOVSD ES:EDI,ESI                    ; 00531443
    MOVSD ES:EDI,ESI                    ; 00531444
    MOVSD ES:EDI,ESI                    ; 00531445
    JMP 0x0053137c                      ; 00531446
        ;   XREF to: 0053137c (UNCONDITIONAL_JUMP)  ; LAB_0053137c
    PUSH EBP                            ; 0053144b
        ;   Label: LAB_0053144b
    MOV EDX,dword ptr [ESI + 0x1fc960c] ; 0053144c
    PUSH EDX                            ; 00531452
    JMP 0x0053139e                      ; 00531453
        ;   XREF to: 0053139e (UNCONDITIONAL_JUMP)  ; LAB_0053139e

