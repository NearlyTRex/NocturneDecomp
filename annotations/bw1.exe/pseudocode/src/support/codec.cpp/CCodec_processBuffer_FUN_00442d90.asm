; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_codec_cpp_CCodec_processBuffer_FUN_00442d90(CCodec *this_ptr,char *input,int *input_length,char *output,int *output_length,int enable_callback)
;
; Parameters:
; CCodec *         Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   input
; int *            Stack[0xc]:4   input_length
; char *           Stack[0x10]:4   output
; int *            Stack[0x14]:4   output_length
; int              Stack[0x18]:4   enable_callback
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044fff0 at 004502ef
;
; Called Functions:
;   support_trstream.cpp_CInStreamMemory_ctorOpen_FUN_005a1160
;   support_trstream.cpp_CInStreamMemory_dtor_FUN_005a11e0
;   support_trstream.cpp_CInStreamMemory_tell_FUN_005a13b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442d90
        ;   Label: support_codec.cpp_CCodec_processBuffer_FUN_00442d90
    PUSH ESI                            ; 00442d91
    PUSH EDI                            ; 00442d92
    PUSH EBP                            ; 00442d93
    SUB ESP,0x14                        ; 00442d94
    MOV ESI,dword ptr [ESP + 0x30]      ; 00442d97
    MOV EDX,dword ptr [ESI]             ; 00442d9b
    PUSH EDX                            ; 00442d9d
    MOV ECX,dword ptr [ESP + 0x30]      ; 00442d9e
    PUSH ECX                            ; 00442da2
    LEA EAX,[ESP + 0x8]                 ; 00442da3
    PUSH EAX                            ; 00442da7
    CALL support_trstream.cpp_CInStreamMemory_ctorOpen_FUN_005a1160 ; 00442da8
        ;   XREF to: 005a1160 (UNCONDITIONAL_CALL)  ; CInStreamMemory * support_trstream.cpp_CInStreamMemory_ctorOpen_FUN_005a1160(CInStreamMemory * this_ptr, char * data, int size)
    ADD ESP,0xc                         ; 00442dad
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00442db0
    PUSH EDI                            ; 00442db4
    MOV EBP,dword ptr [ESP + 0x3c]      ; 00442db5
    PUSH EBP                            ; 00442db9
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00442dba
    PUSH EAX                            ; 00442dbe
    LEA EAX,[ESP + 0xc]                 ; 00442dbf
    MOV EBX,dword ptr [ESP + 0x34]      ; 00442dc3
    PUSH EAX                            ; 00442dc7
    MOV EDX,dword ptr [ESP + 0x38]      ; 00442dc8
    MOV EBX,dword ptr [EBX]             ; 00442dcc
    PUSH EDX                            ; 00442dce
    CALL dword ptr [EBX + 0x10]         ; 00442dcf
    ADD ESP,0x14                        ; 00442dd2
    MOV EBX,EAX                         ; 00442dd5
    MOV EAX,ESP                         ; 00442dd7
    PUSH EAX                            ; 00442dd9
    CALL support_trstream.cpp_CInStreamMemory_tell_FUN_005a13b0 ; 00442dda
        ;   XREF to: 005a13b0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamMemory_tell_FUN_005a13b0(CInStreamMemory * this_ptr)
    ADD ESP,0x4                         ; 00442ddf
    MOV ECX,dword ptr [ESI]             ; 00442de2
    PUSH 0x0                            ; 00442de4
    SUB ECX,EAX                         ; 00442de6
    LEA EAX,[ESP + 0x4]                 ; 00442de8
    PUSH EAX                            ; 00442dec
    MOV dword ptr [ESI],ECX             ; 00442ded
    CALL support_trstream.cpp_CInStreamMemory_dtor_FUN_005a11e0 ; 00442def
        ;   XREF to: 005a11e0 (UNCONDITIONAL_CALL)  ; CInStreamMemory * support_trstream.cpp_CInStreamMemory_dtor_FUN_005a11e0(CInStreamMemory * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00442df4
    MOV EAX,EBX                         ; 00442df7
    ADD ESP,0x14                        ; 00442df9
    POP EBP                             ; 00442dfc
    POP EDI                             ; 00442dfd
    POP ESI                             ; 00442dfe
    POP EBX                             ; 00442dff
    RET                                 ; 00442e00

