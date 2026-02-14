; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * __cdecl shape_meshlod_cpp_CLodMesh_findClosestPointOnMesh_FUN_0051a300(CLodMesh *this_ptr,CVector3f *output_closest_point,CVector3f *target_point)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output_closest_point
; CVector3f *      Stack[0xc]:4   target_point
; Local Variables:
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x18]:4  local_18
;
; Called Functions:
;   shape_meshlod.cpp_CLodMesh_computeClosestPointOnTriangle_FUN_0051a6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051a300
        ;   Label: shape_meshlod.cpp_CLodMesh_findClosestPointOnMesh_FUN_0051a300
    PUSH ESI                            ; 0051a301
    PUSH EDI                            ; 0051a302
    PUSH EBP                            ; 0051a303
    MOV EBP,ESP                         ; 0051a304
    SUB ESP,0x2c                        ; 0051a306
    AND ESP,0xfffffff8                  ; 0051a309
    MOV EBX,dword ptr [EBP + 0x18]      ; 0051a30c
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0051a30f
    MOV EDX,0x39a08ce9                  ; 0051a312
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051a317
    MOV ECX,0x46293e59                  ; 0051a31a
    XOR EDI,EDI                         ; 0051a31f
    MOV dword ptr [ESP],EDX             ; 0051a321
    MOV dword ptr [ESP + 0x28],EDI      ; 0051a324
    MOV EDX,dword ptr [EAX + 0x8]       ; 0051a328
    MOV dword ptr [ESP + 0x4],ECX       ; 0051a32b
    TEST EDX,EDX                        ; 0051a32f
    JLE 0x0051a35c                      ; 0051a331
        ;   XREF to: 0051a35c (CONDITIONAL_JUMP)  ; LAB_0051a35c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051a333
        ;   Label: LAB_0051a333
    MOV EAX,dword ptr [EAX + 0xc]       ; 0051a336
    ADD EAX,EDI                         ; 0051a339
    CMP dword ptr [EAX + 0x40],0x0      ; 0051a33b
    JZ 0x0051a365                       ; 0051a33f
        ;   XREF to: 0051a365 (CONDITIONAL_JUMP)  ; LAB_0051a365
    MOV ECX,dword ptr [ESP + 0x28]      ; 0051a341
        ;   Label: LAB_0051a341
    INC ECX                             ; 0051a345
    MOV EDX,dword ptr [EBP + 0x14]      ; 0051a346
    MOV dword ptr [ESP + 0x28],ECX      ; 0051a349
    MOV EAX,ECX                         ; 0051a34d
    MOV ECX,dword ptr [EDX + 0x8]       ; 0051a34f
    ADD EDI,0x8c                        ; 0051a352
    CMP EAX,ECX                         ; 0051a358
    JL 0x0051a333                       ; 0051a35a
        ;   XREF to: 0051a333 (CONDITIONAL_JUMP)  ; LAB_0051a333
    MOV EAX,EBX                         ; 0051a35c
        ;   Label: LAB_0051a35c
    MOV ESP,EBP                         ; 0051a35e
    POP EBP                             ; 0051a360
    POP EDI                             ; 0051a361
    POP ESI                             ; 0051a362
    POP EBX                             ; 0051a363
    RET                                 ; 0051a364
    PUSH EAX                            ; 0051a365
        ;   Label: LAB_0051a365
    PUSH ESI                            ; 0051a366
    LEA EAX,[ESP + 0x18]                ; 0051a367
    PUSH EAX                            ; 0051a36b
    MOV ECX,dword ptr [EBP + 0x14]      ; 0051a36c
    PUSH ECX                            ; 0051a36f
    CALL shape_meshlod.cpp_CLodMesh_computeClosestPointOnTriangle_FUN_0051a6b0 ; 0051a370
        ;   XREF to: 0051a6b0 (UNCONDITIONAL_CALL)  ; CVector3f * shape_meshlod.cpp_CLodMesh_computeClosestPointOnTriangle_FUN_0051a6b0(CLodMesh * this_ptr, CVector3f * output_point, CVector3f * target_point, CLodFace * triangle_ptr)
    ADD ESP,0x10                        ; 0051a375
    FLD float ptr [ESI]                 ; 0051a378
    FSUB float ptr [ESP + 0x10]         ; 0051a37a
    FMUL ST0                            ; 0051a37e
    FLD float ptr [ESI + 0x4]           ; 0051a380
    FSUB float ptr [ESP + 0x14]         ; 0051a383
    FMUL ST0                            ; 0051a387
    FLD float ptr [ESI + 0x8]           ; 0051a389
    FXCH                                ; 0051a38c
    FADDP ST2,ST0                       ; 0051a38e
    FSUB float ptr [ESP + 0x18]         ; 0051a390
    FMUL ST0                            ; 0051a394
    FADDP                               ; 0051a396
    FSQRT                               ; 0051a398
    FST double ptr [ESP + 0x8]          ; 0051a39a
    FCOMP double ptr [ESP]              ; 0051a39e
    FNSTSW AX                           ; 0051a3a1
    SAHF                                ; 0051a3a3
    JNC 0x0051a341                      ; 0051a3a4
        ;   XREF to: 0051a341 (CONDITIONAL_JUMP)  ; LAB_0051a341
    MOV EAX,dword ptr [ESP + 0x8]       ; 0051a3a6
    MOV dword ptr [ESP],EAX             ; 0051a3aa
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051a3ad
    MOV dword ptr [ESP + 0x4],EAX       ; 0051a3b1
    LEA EAX,[ESP + 0x10]                ; 0051a3b5
    CMP EBX,EAX                         ; 0051a3b9
    JZ 0x0051a341                       ; 0051a3bb
        ;   XREF to: 0051a341 (CONDITIONAL_JUMP)  ; LAB_0051a341
    MOV EAX,dword ptr [ESP + 0x10]      ; 0051a3bd
    MOV dword ptr [EBX],EAX             ; 0051a3c1
    MOV EAX,dword ptr [ESP + 0x14]      ; 0051a3c3
    MOV dword ptr [EBX + 0x4],EAX       ; 0051a3c7
    MOV EAX,dword ptr [ESP + 0x18]      ; 0051a3ca
    MOV dword ptr [EBX + 0x8],EAX       ; 0051a3ce
    JMP 0x0051a341                      ; 0051a3d1
        ;   XREF to: 0051a341 (UNCONDITIONAL_JUMP)  ; LAB_0051a341

