; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_litecone_cpp_CLightCone_getBoundingBox_FUN_00506cb0(CLightCone *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CLightCone *     Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Referenced Globals:
;   double DOUBLE_00631566 = 18
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00506cb0
        ;   Label: core_litecone.cpp_CLightCone_getBoundingBox_FUN_00506cb0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00506cb3
    MOV EAX,dword ptr [ESP + 0xc]       ; 00506cb7
    FLD float ptr [EDX + 0x158]         ; 00506cbb
    FDIVR double ptr [0x00631566]       ; 00506cc1 | DOUBLE_00631566
    FMUL float ptr [EDX + 0x15c]        ; 00506cc7
    MOV dword ptr [EAX + 0x8],0x0       ; 00506ccd
    FSTP float ptr [ESP]                ; 00506cd4
    MOV ECX,dword ptr [ESP]             ; 00506cd7
    MOV dword ptr [EAX + 0xc],ECX       ; 00506cda
    FLD float ptr [ESP]                 ; 00506cdd
    MOV dword ptr [EAX + 0x10],ECX      ; 00506ce0
    FCHS                                ; 00506ce3
    FST float ptr [EAX]                 ; 00506ce5
    FSTP float ptr [EAX + 0x4]          ; 00506ce7
    MOV ECX,dword ptr [EDX + 0x15c]     ; 00506cea
    MOV dword ptr [EAX + 0x14],ECX      ; 00506cf0
    ADD ESP,0x4                         ; 00506cf3
    RET                                 ; 00506cf6

