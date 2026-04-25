; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setedit_cpp_CDemonSet_isPointVisibleFromCamera_FUN_005801b0(CDemonSet *this_ptr,CVector3i *point,int camera_index)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   point
; int              Stack[0xc]:4   camera_index
;
; XREF[2]:
;   core_setedit.cpp_CDemonSet_buildCameraCoverageMap_FUN_0057fd00 at 0057ff3f
;   core_setedit.cpp_CDemonSet_findVisibleCamerasAtScreenPoint_FUN_005800d0 at 00580180
;
; Referenced Globals:
;   SCameraDepthEntry* g_CameraDepthData
;
; Called Functions:
;   core_setedit.cpp_CDemonSet_buildCameraDepthData_FUN_00580310
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005801b0
        ;   Label: core_setedit.cpp_CDemonSet_isPointVisibleFromCamera_FUN_005801b0
    PUSH ESI                            ; 005801b1
    PUSH EDI                            ; 005801b2
    PUSH EBP                            ; 005801b3
    SUB ESP,0x8                         ; 005801b4
    MOV EDI,dword ptr [ESP + 0x20]      ; 005801b7
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005801bb
    PUSH EDX                            ; 005801bf
    CALL core_setedit.cpp_CDemonSet_buildCameraDepthData_FUN_00580310 ; 005801c0
        ;   XREF to: 00580310 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_buildCameraDepthData_FUN_00580310(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005801c5
    IMUL EAX,dword ptr [ESP + 0x24],0x4b030 ; 005801c8
    MOV ECX,dword ptr [0x03659384]      ; 005801d0 | g_CameraDepthData
    ADD ECX,EAX                         ; 005801d6
    MOV EBX,dword ptr [EDI]             ; 005801d8
    MOV ESI,dword ptr [ECX]             ; 005801da
    MOV EAX,dword ptr [EDI + 0x4]       ; 005801dc
    MOV EBP,dword ptr [ECX + 0x4]       ; 005801df
    MOV EDI,dword ptr [EDI + 0x8]       ; 005801e2
    SUB EAX,EBP                         ; 005801e5
    SUB EBX,ESI                         ; 005801e7
    MOV dword ptr [ESP + 0x4],EAX       ; 005801e9
    MOV EAX,dword ptr [ECX + 0x8]       ; 005801ed
    MOV EDX,EBX                         ; 005801f0
    SUB EDI,EAX                         ; 005801f2
    MOV EAX,dword ptr [ECX + 0x14]      ; 005801f4
    IMUL EDX                            ; 005801f7
    SHRD EAX,EDX,0x10                   ; 005801f9
    MOV EDX,dword ptr [ESP + 0x4]       ; 005801fd
    MOV ESI,EAX                         ; 00580201
    MOV EAX,dword ptr [ECX + 0x20]      ; 00580203
    IMUL EDX                            ; 00580206
    SHRD EAX,EDX,0x10                   ; 00580208
    MOV EDX,EDI                         ; 0058020c
    ADD ESI,EAX                         ; 0058020e
    MOV EAX,dword ptr [ECX + 0x2c]      ; 00580210
    IMUL EDX                            ; 00580213
    SHRD EAX,EDX,0x10                   ; 00580215
    ADD ESI,EAX                         ; 00580219
    TEST ESI,ESI                        ; 0058021b
    JG 0x00580229                       ; 0058021d
        ;   XREF to: 00580229 (CONDITIONAL_JUMP)  ; LAB_00580229
    XOR EAX,EAX                         ; 0058021f
        ;   Label: LAB_0058021f
    ADD ESP,0x8                         ; 00580221
    POP EBP                             ; 00580224
    POP EDI                             ; 00580225
    POP ESI                             ; 00580226
    POP EBX                             ; 00580227
    RET                                 ; 00580228
    MOV EDX,EBX                         ; 00580229
        ;   Label: LAB_00580229
    MOV EAX,dword ptr [ECX + 0xc]       ; 0058022b
    IMUL EDX                            ; 0058022e
    SHRD EAX,EDX,0x10                   ; 00580230
    MOV EDX,dword ptr [ESP + 0x4]       ; 00580234
    MOV EBP,EAX                         ; 00580238
    MOV EAX,dword ptr [ECX + 0x18]      ; 0058023a
    IMUL EDX                            ; 0058023d
    SHRD EAX,EDX,0x10                   ; 0058023f
    MOV EDX,EDI                         ; 00580243
    ADD EBP,EAX                         ; 00580245
    MOV EAX,dword ptr [ECX + 0x24]      ; 00580247
    IMUL EDX                            ; 0058024a
    SHRD EAX,EDX,0x10                   ; 0058024c
    ADD EBP,EAX                         ; 00580250
    CMP EBP,ESI                         ; 00580252
    JGE 0x0058021f                      ; 00580254
        ;   XREF to: 0058021f (CONDITIONAL_JUMP)  ; LAB_0058021f
    MOV EDX,ESI                         ; 00580256
    MOV dword ptr [ESP],ESI             ; 00580258
    NEG EDX                             ; 0058025b
    MOV dword ptr [ESP],EDX             ; 0058025d
    CMP EBP,EDX                         ; 00580260
    JLE 0x0058021f                      ; 00580262
        ;   XREF to: 0058021f (CONDITIONAL_JUMP)  ; LAB_0058021f
    MOV EDX,EBX                         ; 00580264
    MOV EAX,dword ptr [ECX + 0x10]      ; 00580266
    IMUL EDX                            ; 00580269
    SHRD EAX,EDX,0x10                   ; 0058026b
    MOV EDX,dword ptr [ESP + 0x4]       ; 0058026f
    MOV EBX,EAX                         ; 00580273
    MOV EAX,dword ptr [ECX + 0x1c]      ; 00580275
    IMUL EDX                            ; 00580278
    SHRD EAX,EDX,0x10                   ; 0058027a
    MOV EDX,EDI                         ; 0058027e
    ADD EBX,EAX                         ; 00580280
    MOV EAX,dword ptr [ECX + 0x28]      ; 00580282
    IMUL EDX                            ; 00580285
    SHRD EAX,EDX,0x10                   ; 00580287
    LEA EDI,[EBX + EAX*0x1]             ; 0058028b
    CMP EDI,ESI                         ; 0058028e
    JGE 0x0058021f                      ; 00580290
        ;   XREF to: 0058021f (CONDITIONAL_JUMP)  ; LAB_0058021f
    CMP EDI,dword ptr [ESP]             ; 00580292
    JLE 0x0058021f                      ; 00580295
        ;   XREF to: 0058021f (CONDITIONAL_JUMP)  ; LAB_0058021f
    MOV EDX,0xa0                        ; 00580297
    MOV EBX,ESI                         ; 0058029c
    MOV EAX,EBP                         ; 0058029e
    IMUL EDX                            ; 005802a0
    IDIV EBX                            ; 005802a2
    MOV EDX,0x78                        ; 005802a4
    LEA EBP,[EAX + 0xa0]                ; 005802a9
    MOV EBX,ESI                         ; 005802af
    MOV EAX,EDI                         ; 005802b1
    IMUL EDX                            ; 005802b3
    IDIV EBX                            ; 005802b5
    LEA EDI,[EAX + 0x78]                ; 005802b7
    CMP EBP,0x1                         ; 005802ba
    JL 0x0058021f                       ; 005802bd
        ;   XREF to: 0058021f (CONDITIONAL_JUMP)  ; LAB_0058021f
    CMP EDI,0x1                         ; 005802c3
    JL 0x0058021f                       ; 005802c6
        ;   XREF to: 0058021f (CONDITIONAL_JUMP)  ; LAB_0058021f
    CMP EBP,0x13f                       ; 005802cc
    JGE 0x0058021f                      ; 005802d2
        ;   XREF to: 0058021f (CONDITIONAL_JUMP)  ; LAB_0058021f
    CMP EDI,0xef                        ; 005802d8
    JGE 0x0058021f                      ; 005802de
        ;   XREF to: 0058021f (CONDITIONAL_JUMP)  ; LAB_0058021f
    SHL EBP,0x6                         ; 005802e4
    MOV EAX,EBP                         ; 005802e7
    SHL EAX,0x4                         ; 005802e9
    SUB EAX,EBP                         ; 005802ec
    ADD ECX,EAX                         ; 005802ee
    SUB ESI,0x100                       ; 005802f0
    CMP ESI,dword ptr [ECX + EDI*0x4 + 0x30] ; 005802f6
    SETL AL                             ; 005802fa
    AND EAX,0xff                        ; 005802fd
    ADD ESP,0x8                         ; 00580302
    POP EBP                             ; 00580305
    POP EDI                             ; 00580306
    POP ESI                             ; 00580307
    POP EBX                             ; 00580308
    RET                                 ; 00580309

