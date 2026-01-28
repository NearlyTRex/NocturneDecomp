; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * __cdecl core_dstrender_cpp_memcpyMMX_FUN_00492001(void *dest,void *src,int byte_count)
;
; Parameters:
; void *           Stack[0x4]:4   dest
; void *           Stack[0x8]:4   src
; int              Stack[0xc]:4   byte_count
;
; XREF[5]:
;   core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0 at 0044cee2
;   core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860 at 0044ca67
;   core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_0044c780 at 0044c820
;   core_dlight.cpp_CDemonLight_blitZBuffer_FUN_00472c70 at 00472cef
;   core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80 at 0047315c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00492001
        ;   Label: core_dstrender.cpp_memcpyMMX_FUN_00492001
    MOV EBP,ESP                         ; 00492002
    PUSH ESI                            ; 00492004
    PUSH EDI                            ; 00492005
    PUSH EAX                            ; 00492006
    PUSH ECX                            ; 00492007
    MOV ESI,dword ptr [EBP + 0xc]       ; 00492008
    MOV ECX,dword ptr [EBP + 0x10]      ; 0049200b
    MOV AL,byte ptr [ESI]               ; 0049200e
        ;   Label: LAB_0049200e
    ADD ESI,0x20                        ; 00492010
    SUB ECX,0x20                        ; 00492013
    JG 0x0049200e                       ; 00492016
        ;   XREF to: 0049200e (CONDITIONAL_JUMP)  ; LAB_0049200e
    MOV ESI,dword ptr [EBP + 0xc]       ; 00492018
    AND ESI,0xfffffff8                  ; 0049201b
    MOV EDI,dword ptr [EBP + 0x8]       ; 0049201e
    AND EDI,0xfffffff8                  ; 00492021
    MOV ECX,dword ptr [EBP + 0x10]      ; 00492024
    SHR ECX,0x3                         ; 00492027
    INC ECX                             ; 0049202a
    MOVQ MM0,qword ptr [ESI]            ; 0049202b
        ;   Label: LAB_0049202b
    MOVQ qword ptr [EDI],MM0            ; 0049202e
    ADD ESI,0x8                         ; 00492031
    ADD EDI,0x8                         ; 00492034
    DEC ECX                             ; 00492037
    JGE 0x0049202b                      ; 00492038
        ;   XREF to: 0049202b (CONDITIONAL_JUMP)  ; LAB_0049202b
    POP ECX                             ; 0049203a
    POP EAX                             ; 0049203b
    EMMS                                ; 0049203c
    POP EDI                             ; 0049203e
    POP ESI                             ; 0049203f
    LEAVE                               ; 00492040
    RET                                 ; 00492041

