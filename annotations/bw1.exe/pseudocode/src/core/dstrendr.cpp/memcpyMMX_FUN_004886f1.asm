; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_memcpyMMX_FUN_004886f1(void *dest,void *src,int byte_count)
;
; Parameters:
; void *           Stack[0x4]:4   dest
; void *           Stack[0x8]:4   src
; int              Stack[0xc]:4   byte_count
;
; XREF[5]:
;   core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044d8c0 at 0044d9b2
;   core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044d2f0 at 0044d4f7
;   core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_0044d210 at 0044d2b0
;   core_dlight.cpp_CDemonLight_blitZBuffer_FUN_00462a10 at 00462a8f
;   core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00462d20 at 00462efc
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004886f1
        ;   Label: core_dstrendr.cpp_memcpyMMX_FUN_004886f1
    MOV EBP,ESP                         ; 004886f2
    PUSH ESI                            ; 004886f4
    PUSH EDI                            ; 004886f5
    PUSH EAX                            ; 004886f6
    PUSH ECX                            ; 004886f7
    MOV ESI,dword ptr [EBP + 0xc]       ; 004886f8
    MOV ECX,dword ptr [EBP + 0x10]      ; 004886fb
    MOV AL,byte ptr [ESI]               ; 004886fe
        ;   Label: LAB_004886fe
    ADD ESI,0x20                        ; 00488700
    SUB ECX,0x20                        ; 00488703
    JG 0x004886fe                       ; 00488706
        ;   XREF to: 004886fe (CONDITIONAL_JUMP)  ; LAB_004886fe
    MOV ESI,dword ptr [EBP + 0xc]       ; 00488708
    AND ESI,0xfffffff8                  ; 0048870b
    MOV EDI,dword ptr [EBP + 0x8]       ; 0048870e
    AND EDI,0xfffffff8                  ; 00488711
    MOV ECX,dword ptr [EBP + 0x10]      ; 00488714
    SHR ECX,0x3                         ; 00488717
    INC ECX                             ; 0048871a
    MOVQ MM0,qword ptr [ESI]            ; 0048871b
        ;   Label: LAB_0048871b
    MOVQ qword ptr [EDI],MM0            ; 0048871e
    ADD ESI,0x8                         ; 00488721
    ADD EDI,0x8                         ; 00488724
    DEC ECX                             ; 00488727
    JGE 0x0048871b                      ; 00488728
        ;   XREF to: 0048871b (CONDITIONAL_JUMP)  ; LAB_0048871b
    POP ECX                             ; 0048872a
    POP EAX                             ; 0048872b
    EMMS                                ; 0048872c
    POP EDI                             ; 0048872e
    POP ESI                             ; 0048872f
    LEAVE                               ; 00488730
    RET                                 ; 00488731

