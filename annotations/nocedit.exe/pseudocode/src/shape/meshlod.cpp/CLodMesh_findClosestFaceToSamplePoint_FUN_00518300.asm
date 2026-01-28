; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_meshlod_cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300 (CLodMesh *this_ptr,int sample_point_index)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   sample_point_index
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   shape_meshlod.cpp_CLodMesh_collapseEdge_FUN_00517630 at 005182a7
;   shape_meshlod.cpp_CLodMesh_createOrigSamplePoints_FUN_00517000 at 005170ff
;
; Referenced Globals:
;   TerminatedCString s_shape_meshlod_cpp_006378af
;   TerminatedCString s_Can_t_find_closest_face_006378c4
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_meshlod.cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00518300
        ;   Label: shape_meshlod.cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300
    PUSH ESI                            ; 00518301
    PUSH EDI                            ; 00518302
    PUSH EBP                            ; 00518303
    MOV EBP,ESP                         ; 00518304
    SUB ESP,0x14                        ; 00518306
    AND ESP,0xfffffff8                  ; 00518309
    MOV EDI,dword ptr [EBP + 0x14]      ; 0051830c
    MOV EAX,dword ptr [EBP + 0x18]      ; 0051830f
    SHL EAX,0x2                         ; 00518312
    MOV EBX,EAX                         ; 00518315
    SHL EAX,0x3                         ; 00518317
    SUB EAX,EBX                         ; 0051831a
    MOV EBX,dword ptr [EDI + 0x60]      ; 0051831c
    ADD EBX,EAX                         ; 0051831f
    MOV dword ptr [EBX + 0x10],0x39a08ce9 ; 00518321
    MOV dword ptr [EBX + 0x14],0x46293e59 ; 00518328
    MOV dword ptr [EBX + 0xc],0xffffffff ; 0051832f
    MOV EDX,dword ptr [EDI + 0x8]       ; 00518336
    XOR ESI,ESI                         ; 00518339
    TEST EDX,EDX                        ; 0051833b
    JLE 0x00518368                      ; 0051833d
        ;   XREF to: 00518368 (CONDITIONAL_JUMP)  ; LAB_00518368
    MOV dword ptr [ESP + 0x10],ESI      ; 0051833f
    MOV EDX,dword ptr [ESP + 0x10]      ; 00518343
        ;   Label: LAB_00518343
    MOV EAX,dword ptr [EDI + 0xc]       ; 00518347
    ADD EAX,EDX                         ; 0051834a
    CMP dword ptr [EAX + 0x40],0x0      ; 0051834c
    JZ 0x00518375                       ; 00518350
        ;   XREF to: 00518375 (CONDITIONAL_JUMP)  ; LAB_00518375
    MOV ECX,dword ptr [ESP + 0x10]      ; 00518352
        ;   Label: LAB_00518352
    INC ESI                             ; 00518356
    ADD ECX,0x8c                        ; 00518357
    MOV EAX,dword ptr [EDI + 0x8]       ; 0051835d
    MOV dword ptr [ESP + 0x10],ECX      ; 00518360
    CMP ESI,EAX                         ; 00518364
    JL 0x00518343                       ; 00518366
        ;   XREF to: 00518343 (CONDITIONAL_JUMP)  ; LAB_00518343
    CMP dword ptr [EBX + 0xc],0x0       ; 00518368
        ;   Label: LAB_00518368
    JL 0x005183a9                       ; 0051836c
        ;   XREF to: 005183a9 (CONDITIONAL_JUMP)  ; LAB_005183a9
    MOV ESP,EBP                         ; 0051836e
    POP EBP                             ; 00518370
    POP EDI                             ; 00518371
    POP ESI                             ; 00518372
    POP EBX                             ; 00518373
    RET                                 ; 00518374
    PUSH EAX                            ; 00518375
        ;   Label: LAB_00518375
    PUSH EBX                            ; 00518376
    PUSH EDI                            ; 00518377
    CALL shape_meshlod.cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400 ; 00518378
        ;   XREF to: 0051a400 (UNCONDITIONAL_CALL)  ; double shape_meshlod.cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400(CLodMesh * this_ptr, SLodSamplePoint * sample_point, CLodFace * face)
    MOV dword ptr [ESP + 0x14],EAX      ; 0051837d
    MOV dword ptr [ESP + 0x18],EDX      ; 00518381
    FLD double ptr [ESP + 0x14]         ; 00518385
    ADD ESP,0xc                         ; 00518389
    FST double ptr [ESP]                ; 0051838c
    FCOMP double ptr [EBX + 0x10]       ; 0051838f
    FNSTSW AX                           ; 00518392
    SAHF                                ; 00518394
    JNC 0x00518352                      ; 00518395
        ;   XREF to: 00518352 (CONDITIONAL_JUMP)  ; LAB_00518352
    MOV EAX,dword ptr [ESP]             ; 00518397
    MOV dword ptr [EBX + 0xc],ESI       ; 0051839a
    MOV dword ptr [EBX + 0x10],EAX      ; 0051839d
    MOV EAX,dword ptr [ESP + 0x4]       ; 005183a0
    MOV dword ptr [EBX + 0x14],EAX      ; 005183a4
    JMP 0x00518352                      ; 005183a7
        ;   XREF to: 00518352 (UNCONDITIONAL_JUMP)  ; LAB_00518352
    MOV ECX,0x6378af                    ; 005183a9 | = "..\\shape\\meshlod.cpp"
        ;   Label: LAB_005183a9
    MOV EBX,0xa30                       ; 005183ae
    PUSH 0x6378c4                       ; 005183b3 | = "Can't find closest face!"
    MOV dword ptr [0x02f0ca48],ECX      ; 005183b8 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005183be | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005183c4
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005183c9
    MOV ESP,EBP                         ; 005183cc
    POP EBP                             ; 005183ce
    POP EDI                             ; 005183cf
    POP ESI                             ; 005183d0
    POP EBX                             ; 005183d1
    RET                                 ; 005183d2

