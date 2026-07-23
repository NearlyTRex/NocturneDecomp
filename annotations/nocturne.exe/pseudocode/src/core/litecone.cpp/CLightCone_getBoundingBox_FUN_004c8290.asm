; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_litecone_cpp_CLightCone_getBoundingBox_FUN_004c8290(int param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   double DOUBLE_00587add = 18
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004c8290
        ;   Label: core_litecone.cpp_CLightCone_getBoundingBox_FUN_004c8290
    MOV EDX,dword ptr [ESP + 0x8]       ; 004c8293
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c8297
    FLD float ptr [EDX + 0x150]         ; 004c829b
    FDIVR double ptr [0x00587add]       ; 004c82a1 | DOUBLE_00587add
    FMUL float ptr [EDX + 0x154]        ; 004c82a7
    MOV dword ptr [EAX + 0x8],0x0       ; 004c82ad
    FSTP float ptr [ESP]                ; 004c82b4
    MOV ECX,dword ptr [ESP]             ; 004c82b7
    MOV dword ptr [EAX + 0xc],ECX       ; 004c82ba
    FLD float ptr [ESP]                 ; 004c82bd
    MOV dword ptr [EAX + 0x10],ECX      ; 004c82c0
    FCHS                                ; 004c82c3
    FST float ptr [EAX]                 ; 004c82c5
    FSTP float ptr [EAX + 0x4]          ; 004c82c7
    MOV ECX,dword ptr [EDX + 0x154]     ; 004c82ca
    MOV dword ptr [EAX + 0x14],ECX      ; 004c82d0
    ADD ESP,0x4                         ; 004c82d3
    RET                                 ; 004c82d6

