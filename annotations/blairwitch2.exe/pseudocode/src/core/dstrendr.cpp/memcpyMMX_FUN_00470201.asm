; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_memcpyMMX_FUN_00470201(void *dest,void *src,int byte_count)
;
; Parameters:
; void *           Stack[0x4]:4   dest
; void *           Stack[0x8]:4   src
; int              Stack[0xc]:4   byte_count
;
; XREF[5]:
;   core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0043c200 at 0043c2f2
;   core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0043bc30 at 0043be37
;   core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_0043bb50 at 0043bbf0
;   core_dlight.cpp_FUN_0044a210 at 0044a28f
;   core_dlight.cpp_FUN_0044a520 at 0044a6fc
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00470201
        ;   Label: core_dstrendr.cpp_memcpyMMX_FUN_00470201
    MOV EBP,ESP                         ; 00470202
    PUSH ESI                            ; 00470204
    PUSH EDI                            ; 00470205
    PUSH EAX                            ; 00470206
    PUSH ECX                            ; 00470207
    MOV ESI,dword ptr [EBP + 0xc]       ; 00470208
    MOV ECX,dword ptr [EBP + 0x10]      ; 0047020b
    MOV AL,byte ptr [ESI]               ; 0047020e
        ;   Label: LAB_0047020e
    ADD ESI,0x20                        ; 00470210
    SUB ECX,0x20                        ; 00470213
    JG 0x0047020e                       ; 00470216
        ;   XREF to: 0047020e (CONDITIONAL_JUMP)  ; LAB_0047020e
    MOV ESI,dword ptr [EBP + 0xc]       ; 00470218
    AND ESI,0xfffffff8                  ; 0047021b
    MOV EDI,dword ptr [EBP + 0x8]       ; 0047021e
    AND EDI,0xfffffff8                  ; 00470221
    MOV ECX,dword ptr [EBP + 0x10]      ; 00470224
    SHR ECX,0x3                         ; 00470227
    INC ECX                             ; 0047022a
    MOVQ MM0,qword ptr [ESI]            ; 0047022b
        ;   Label: LAB_0047022b
    MOVQ qword ptr [EDI],MM0            ; 0047022e
    ADD ESI,0x8                         ; 00470231
    ADD EDI,0x8                         ; 00470234
    DEC ECX                             ; 00470237
    JGE 0x0047022b                      ; 00470238
        ;   XREF to: 0047022b (CONDITIONAL_JUMP)  ; LAB_0047022b
    POP ECX                             ; 0047023a
    POP EAX                             ; 0047023b
    EMMS                                ; 0047023c
    POP EDI                             ; 0047023e
    POP ESI                             ; 0047023f
    LEAVE                               ; 00470240
    RET                                 ; 00470241

