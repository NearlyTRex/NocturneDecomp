; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_skeleton_cpp_FUN_005660c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5,byte *param_6)
;
; Local Variables:
; undefined8       Stack[-0x90]:8  local_90
; undefined4       Stack[-0x88]:4  local_88
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_0056a870 at 0056a8b8
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005f238d
;   TerminatedCString s_CDeformableModel_exactRa_005f23a2
;   WatcomTypeInfo g_CVectorTypeInfo
;   undefined4 DAT_00605890
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_026a0b9c
;   undefined4 DAT_026a0ba0
;   undefined4 DAT_026a0ba4
;   undefined4 DAT_026a0ba8
;   undefined4 DAT_026a0bac
;   undefined4 DAT_026a0bb0
;   undefined4 DAT_026af5fc
;   undefined4 DAT_026b82a4
;   undefined4 DAT_026b82a8
;   ... and 4 more
;
; Called Functions:
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0
;   core_dtri.cpp_rayTriangleIntersection_FUN_0048ff40
;   core_main.c_FUN_005030e0
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005660c0
        ;   Label: core_skeleton.cpp_FUN_005660c0
    PUSH ESI                            ; 005660c1
    PUSH EDI                            ; 005660c2
    PUSH EBP                            ; 005660c3
    MOV EBP,ESP                         ; 005660c4
    SUB ESP,0x7c                        ; 005660c6
    AND ESP,0xfffffff8                  ; 005660c9
    MOV AH,byte ptr [0x026af5fc]        ; 005660cc | DAT_026af5fc
    TEST AH,0x1                         ; 005660d2
    JZ 0x0056634f                       ; 005660d5
        ;   XREF to: 0056634f (CONDITIONAL_JUMP)  ; LAB_0056634f
    MOV EAX,dword ptr [EBP + 0x18]      ; 005660db
        ;   Label: LAB_005660db
    MOV EDX,dword ptr [EBP + 0x14]      ; 005660de
    SHL EAX,0x2                         ; 005660e1
    ADD EAX,EDX                         ; 005660e4
    CMP dword ptr [EAX + 0x2c],0x1388   ; 005660e6
    JLE 0x00566112                      ; 005660ed
        ;   XREF to: 00566112 (CONDITIONAL_JUMP)  ; LAB_00566112
    MOV EBX,0x5f238d                    ; 005660ef | = "..\\core\\skeleton.cpp"
    MOV ESI,0x6eb                       ; 005660f4
    PUSH 0x5f23a2                       ; 005660f9 | = "CDeformableModel::exactRayTrace - too..."
    MOV dword ptr [0x01d1d400],EBX      ; 005660fe | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00566104 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0056610a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0056610f
    MOV EDI,dword ptr [EBP + 0x18]      ; 00566112
        ;   Label: LAB_00566112
    MOV EAX,dword ptr [EBP + 0x14]      ; 00566115
    SHL EDI,0x2                         ; 00566118
    ADD EDI,EAX                         ; 0056611b
    MOV EDX,0x26a0b9c                   ; 0056611d
    MOV ECX,dword ptr [EBP + 0x24]      ; 00566122
    MOV EBX,dword ptr [EDI + 0x2c]      ; 00566125
    XOR ESI,ESI                         ; 00566128
    TEST EBX,EBX                        ; 0056612a
    JLE 0x00566170                      ; 0056612c
        ;   XREF to: 00566170 (CONDITIONAL_JUMP)  ; LAB_00566170
    MOV EAX,ECX                         ; 0056612e
        ;   Label: LAB_0056612e
    MOV EBX,EDX                         ; 00566130
    FILD dword ptr [EAX]                ; 00566132
    FMUL float ptr [0x00605890]         ; 00566134 | DAT_00605890
    FSTP float ptr [EBX]                ; 0056613a | DAT_026a0b9c | DAT_026a0ba8
    FILD dword ptr [EAX + 0x4]          ; 0056613c
    FMUL float ptr [0x00605890]         ; 0056613f | DAT_00605890
    FSTP float ptr [EBX + 0x4]          ; 00566145 | DAT_026a0ba0 | DAT_026a0bac
    FILD dword ptr [EAX + 0x8]          ; 00566148
    FMUL float ptr [0x00605890]         ; 0056614b | DAT_00605890
    FSTP float ptr [EBX + 0x8]          ; 00566151 | DAT_026a0ba4 | DAT_026a0bb0
    INC ESI                             ; 00566154
    ADD EDX,0xc                         ; 00566155
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00566158
    ADD ECX,0xc                         ; 0056615b
    CMP ESI,EAX                         ; 0056615e
    JL 0x0056612e                       ; 00566160
        ;   XREF to: 0056612e (CONDITIONAL_JUMP)  ; LAB_0056612e
    LEA EAX,[EAX]                       ; 00566162
    LEA EDX,[EDX]                       ; 00566168
    MOV EAX,EAX                         ; 0056616e
    MOV dword ptr [ESP + 0x70],0x3f8147ae ; 00566170
        ;   Label: LAB_00566170
    MOV EDX,dword ptr [EBP + 0x14]      ; 00566178
    XOR EAX,EAX                         ; 0056617b
    MOV EBX,dword ptr [EDX + 0xc00]     ; 0056617d
    MOV dword ptr [ESP + 0x6c],EAX      ; 00566183
    TEST EBX,EBX                        ; 00566187
    JLE 0x00566344                      ; 00566189
        ;   XREF to: 00566344 (CONDITIONAL_JUMP)  ; LAB_00566344
    MOV EDX,dword ptr [EBP + 0x18]      ; 0056618f
    MOV ECX,dword ptr [EBP + 0x14]      ; 00566192
    SHL EDX,0x2                         ; 00566195
    ADD ECX,EDX                         ; 00566198
    MOV ESI,dword ptr [EBP + 0x14]      ; 0056619a
    MOV dword ptr [ESP + 0x64],ECX      ; 0056619d
    ADD EDX,ESI                         ; 005661a1
    MOV ECX,dword ptr [EBP + 0x28]      ; 005661a3
    MOV dword ptr [ESP + 0x5c],EDX      ; 005661a6
    MOV dword ptr [ESP + 0x60],ECX      ; 005661aa
    MOV EDX,dword ptr [ESP + 0x5c]      ; 005661ae
        ;   Label: LAB_005661ae
    MOV EDX,dword ptr [EDX + 0xc24]     ; 005661b2
    ADD EDX,EAX                         ; 005661b8
    MOV dword ptr [ESP + 0x68],EDX      ; 005661ba
    MOV EDX,dword ptr [ESP + 0x60]      ; 005661be
    TEST byte ptr [EDX],0x1             ; 005661c2
    JZ 0x00566310                       ; 005661c5
        ;   XREF to: 00566310 (CONDITIONAL_JUMP)  ; LAB_00566310
    MOV EDI,dword ptr [ESP + 0x68]      ; 005661cb
    MOV EBX,EAX                         ; 005661cf
    CMP EAX,EDI                         ; 005661d1
    JGE 0x00566310                      ; 005661d3
        ;   XREF to: 00566310 (CONDITIONAL_JUMP)  ; LAB_00566310
    IMUL EAX,EAX,0x12                   ; 005661d9
    MOV dword ptr [ESP + 0x74],EAX      ; 005661dc
    MOV EAX,dword ptr [ESP + 0x64]      ; 005661e0
        ;   Label: LAB_005661e0
    MOV ECX,dword ptr [ESP + 0x74]      ; 005661e4
    MOV EAX,dword ptr [EAX + 0x7c]      ; 005661e8
    ADD EAX,ECX                         ; 005661eb
    XOR EDX,EDX                         ; 005661ed
    MOV DX,word ptr [EAX + 0x4]         ; 005661ef
    IMUL EDX,EDX,0xc                    ; 005661f3
    ADD EDX,0x26a0b9c                   ; 005661f6
    PUSH EDX                            ; 005661fc
    XOR EDX,EDX                         ; 005661fd
    MOV DX,word ptr [EAX + 0x2]         ; 005661ff
    IMUL EDX,EDX,0xc                    ; 00566203
    ADD EDX,0x26a0b9c                   ; 00566206
    MOV AX,word ptr [EAX]               ; 0056620c
    PUSH EDX                            ; 0056620f
    AND EAX,0xffff                      ; 00566210
    IMUL EAX,EAX,0xc                    ; 00566215
    ADD EAX,0x26a0b9c                   ; 00566218
    PUSH EAX                            ; 0056621d
    LEA EAX,[ESP + 0x18]                ; 0056621e
    PUSH EAX                            ; 00566222
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0 ; 00566223
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00566228
    MOV ESI,dword ptr [EBP + 0x20]      ; 0056622b
    PUSH ESI                            ; 0056622e
    MOV EDI,dword ptr [EBP + 0x1c]      ; 0056622f
    PUSH EDI                            ; 00566232
    LEA EAX,[ESP + 0x14]                ; 00566233
    PUSH EAX                            ; 00566237
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_0048ff40 ; 00566238
        ;   XREF to: 0048ff40 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_rayTriangleIntersection_FUN_0048ff40()
    MOV dword ptr [ESP + 0x84],EAX      ; 0056623d
    FLD float ptr [ESP + 0x84]          ; 00566244
    ADD ESP,0xc                         ; 0056624b
    FST float ptr [ESP + 0x8]           ; 0056624e
    FCOMP float ptr [ESP + 0x70]        ; 00566252
    FNSTSW AX                           ; 00566256
    SAHF                                ; 00566258
    JNC 0x005662f8                      ; 00566259
        ;   XREF to: 005662f8 (CONDITIONAL_JUMP)  ; LAB_005662f8
    FLD float ptr [ESP + 0x8]           ; 0056625f
    FLDZ                                ; 00566263
    FXCH                                ; 00566265
    FSTP double ptr [ESP]               ; 00566267
    FCOMP double ptr [ESP]              ; 0056626a
    FNSTSW AX                           ; 0056626d
    SAHF                                ; 0056626f
    JA 0x005662f8                       ; 00566270
        ;   XREF to: 005662f8 (CONDITIONAL_JUMP)  ; LAB_005662f8
    FLD1                                ; 00566276
    FCOMP double ptr [ESP]              ; 00566278
    FNSTSW AX                           ; 0056627b
    SAHF                                ; 0056627d
    JC 0x005662f8                       ; 0056627e
        ;   XREF to: 005662f8 (CONDITIONAL_JUMP)  ; LAB_005662f8
    FLD float ptr [ESP + 0x30]          ; 00566280
    FLD float ptr [ESP + 0x34]          ; 00566284
    FLD float ptr [ESP + 0x38]          ; 00566288
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056628c
    LEA EDI,[ESP + 0x50]                ; 00566290
    LEA ESI,[ESP + 0x44]                ; 00566294
    FXCH ST2                            ; 00566298
    FCHS                                ; 0056629a
    FXCH                                ; 0056629c
    FCHS                                ; 0056629e
    FXCH ST2                            ; 005662a0
    FCHS                                ; 005662a2
    FXCH                                ; 005662a4
    FSTP float ptr [ESP + 0x44]         ; 005662a6
    FXCH                                ; 005662aa
    FSTP float ptr [ESP + 0x48]         ; 005662ac
    FSTP float ptr [ESP + 0x4c]         ; 005662b0
    MOV dword ptr [ESP + 0x70],EAX      ; 005662b4
    LEA EAX,[ESP + 0x50]                ; 005662b8
    MOVSD ES:EDI,ESI                    ; 005662bc
    MOVSD ES:EDI,ESI                    ; 005662bd
    MOVSD ES:EDI,ESI                    ; 005662be
    CMP EAX,0x26b82a8                   ; 005662bf
    JZ 0x005662e1                       ; 005662c4
        ;   XREF to: 005662e1 (CONDITIONAL_JUMP)  ; LAB_005662e1
    MOV EAX,dword ptr [ESP + 0x50]      ; 005662c6
    MOV [0x026b82a8],EAX                ; 005662ca | DAT_026b82a8
    MOV EAX,dword ptr [ESP + 0x54]      ; 005662cf
    MOV [0x026b82ac],EAX                ; 005662d3 | DAT_026b82ac
    MOV EAX,dword ptr [ESP + 0x58]      ; 005662d8
    MOV [0x026b82b0],EAX                ; 005662dc | DAT_026b82b0
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005662e1
        ;   Label: LAB_005662e1
    MOV [0x026b82a4],EAX                ; 005662e5 | DAT_026b82a4
    MOV EAX,dword ptr [EBP + 0x18]      ; 005662ea
    MOV dword ptr [0x026b82b8],EBX      ; 005662ed | DAT_026b82b8
    MOV [0x026b82b4],EAX                ; 005662f3 | DAT_026b82b4
    MOV EAX,dword ptr [ESP + 0x74]      ; 005662f8
        ;   Label: LAB_005662f8
    MOV EDX,dword ptr [ESP + 0x68]      ; 005662fc
    ADD EAX,0x12                        ; 00566300
    INC EBX                             ; 00566303
    MOV dword ptr [ESP + 0x74],EAX      ; 00566304
    CMP EBX,EDX                         ; 00566308
    JL 0x005661e0                       ; 0056630a
        ;   XREF to: 005661e0 (CONDITIONAL_JUMP)  ; LAB_005661e0
    MOV EAX,dword ptr [ESP + 0x68]      ; 00566310
        ;   Label: LAB_00566310
    MOV ESI,dword ptr [ESP + 0x60]      ; 00566314
    MOV EDI,dword ptr [ESP + 0x5c]      ; 00566318
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0056631c
    MOV ECX,dword ptr [EBP + 0x14]      ; 00566320
    ADD ESI,0x4                         ; 00566323
    ADD EDI,0x60                        ; 00566326
    INC EDX                             ; 00566329
    MOV EBX,dword ptr [ECX + 0xc00]     ; 0056632a
    MOV dword ptr [ESP + 0x60],ESI      ; 00566330
    MOV dword ptr [ESP + 0x5c],EDI      ; 00566334
    MOV dword ptr [ESP + 0x6c],EDX      ; 00566338
    CMP EDX,EBX                         ; 0056633c
    JL 0x005661ae                       ; 0056633e
        ;   XREF to: 005661ae (CONDITIONAL_JUMP)  ; LAB_005661ae
    MOV EAX,dword ptr [ESP + 0x70]      ; 00566344
        ;   Label: LAB_00566344
    MOV ESP,EBP                         ; 00566348
    POP EBP                             ; 0056634a
    POP EDI                             ; 0056634b
    POP ESI                             ; 0056634c
    POP EBX                             ; 0056634d
    RET                                 ; 0056634e
    PUSH 0x5fb430                       ; 0056634f | g_CVectorTypeInfo
        ;   Label: LAB_0056634f
    MOV DL,AH                           ; 00566354
    PUSH 0x1388                         ; 00566356
    OR DL,0x1                           ; 0056635b
    PUSH 0x26a0b9c                      ; 0056635e | DAT_026a0b9c
    MOV byte ptr [0x026af5fc],DL        ; 00566363 | DAT_026af5fc
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 00566369
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 0056636e
    JMP 0x005660db                      ; 00566371
        ;   XREF to: 005660db (UNCONDITIONAL_JUMP)  ; LAB_005660db

