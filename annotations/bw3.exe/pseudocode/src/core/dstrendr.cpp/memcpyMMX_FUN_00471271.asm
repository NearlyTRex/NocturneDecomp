; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_memcpyMMX_FUN_00471271(void *dest,void *src,int byte_count)
;
; Parameters:
; void *           Stack[0x4]:4   dest
; void *           Stack[0x8]:4   src
; int              Stack[0xc]:4   byte_count
;
; XREF[5]:
;   core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_00449a00 at 00449af2
;   core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_00449430 at 00449637
;   core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_00449350 at 004493f0
;   core_dlight.cpp_CDemonLight_blitZBuffer_FUN_0045c720 at 0045c79f
;   core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_0045ca30 at 0045cc0c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00471271
        ;   Label: core_dstrendr.cpp_memcpyMMX_FUN_00471271
    MOV EBP,ESP                         ; 00471272
    PUSH ESI                            ; 00471274
    PUSH EDI                            ; 00471275
    PUSH EAX                            ; 00471276
    PUSH ECX                            ; 00471277
    MOV ESI,dword ptr [EBP + 0xc]       ; 00471278
    MOV ECX,dword ptr [EBP + 0x10]      ; 0047127b
    MOV AL,byte ptr [ESI]               ; 0047127e
        ;   Label: LAB_0047127e
    ADD ESI,0x20                        ; 00471280
    SUB ECX,0x20                        ; 00471283
    JG 0x0047127e                       ; 00471286
        ;   XREF to: 0047127e (CONDITIONAL_JUMP)  ; LAB_0047127e
    MOV ESI,dword ptr [EBP + 0xc]       ; 00471288
    AND ESI,0xfffffff8                  ; 0047128b
    MOV EDI,dword ptr [EBP + 0x8]       ; 0047128e
    AND EDI,0xfffffff8                  ; 00471291
    MOV ECX,dword ptr [EBP + 0x10]      ; 00471294
    SHR ECX,0x3                         ; 00471297
    INC ECX                             ; 0047129a
    MOVQ MM0,qword ptr [ESI]            ; 0047129b
        ;   Label: LAB_0047129b
    MOVQ qword ptr [EDI],MM0            ; 0047129e
    ADD ESI,0x8                         ; 004712a1
    ADD EDI,0x8                         ; 004712a4
    DEC ECX                             ; 004712a7
    JGE 0x0047129b                      ; 004712a8
        ;   XREF to: 0047129b (CONDITIONAL_JUMP)  ; LAB_0047129b
    POP ECX                             ; 004712aa
    POP EAX                             ; 004712ab
    EMMS                                ; 004712ac
    POP EDI                             ; 004712ae
    POP ESI                             ; 004712af
    LEAVE                               ; 004712b0
    RET                                 ; 004712b1

