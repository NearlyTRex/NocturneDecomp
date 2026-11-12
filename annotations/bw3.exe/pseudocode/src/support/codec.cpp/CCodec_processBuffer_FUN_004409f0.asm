; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_codec_cpp_CCodec_processBuffer_FUN_004409f0(CCodec *this_ptr,char *input,int *input_length,char *output,int *output_length,int enable_callback)
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
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044c130 at 0044c42f
;
; Called Functions:
;   support_trstream.cpp_CInStreamMemory_ctorOpen_FUN_00574150
;   support_trstream.cpp_CInStreamMemory_dtor_FUN_005741d0
;   support_trstream.cpp_CInStreamMemory_tell_FUN_005743a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004409f0
        ;   Label: support_codec.cpp_CCodec_processBuffer_FUN_004409f0
    PUSH ESI                            ; 004409f1
    PUSH EDI                            ; 004409f2
    PUSH EBP                            ; 004409f3
    SUB ESP,0x14                        ; 004409f4
    MOV ESI,dword ptr [ESP + 0x30]      ; 004409f7
    MOV EDX,dword ptr [ESI]             ; 004409fb
    PUSH EDX                            ; 004409fd
    MOV ECX,dword ptr [ESP + 0x30]      ; 004409fe
    PUSH ECX                            ; 00440a02
    LEA EAX,[ESP + 0x8]                 ; 00440a03
    PUSH EAX                            ; 00440a07
    CALL support_trstream.cpp_CInStreamMemory_ctorOpen_FUN_00574150 ; 00440a08
        ;   XREF to: 00574150 (UNCONDITIONAL_CALL)  ; undefined4 * support_trstream.cpp_CInStreamMemory_ctorOpen_FUN_00574150(CInStreamMemory * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 00440a0d
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00440a10
    PUSH EDI                            ; 00440a14
    MOV EBP,dword ptr [ESP + 0x3c]      ; 00440a15
    PUSH EBP                            ; 00440a19
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00440a1a
    PUSH EAX                            ; 00440a1e
    LEA EAX,[ESP + 0xc]                 ; 00440a1f
    MOV EBX,dword ptr [ESP + 0x34]      ; 00440a23
    PUSH EAX                            ; 00440a27
    MOV EDX,dword ptr [ESP + 0x38]      ; 00440a28
    MOV EBX,dword ptr [EBX]             ; 00440a2c
    PUSH EDX                            ; 00440a2e
    CALL dword ptr [EBX + 0x10]         ; 00440a2f
    ADD ESP,0x14                        ; 00440a32
    MOV EBX,EAX                         ; 00440a35
    MOV EAX,ESP                         ; 00440a37
    PUSH EAX                            ; 00440a39
    CALL support_trstream.cpp_CInStreamMemory_tell_FUN_005743a0 ; 00440a3a
        ;   XREF to: 005743a0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamMemory_tell_FUN_005743a0(CInStreamMemory * this_ptr)
    ADD ESP,0x4                         ; 00440a3f
    MOV ECX,dword ptr [ESI]             ; 00440a42
    PUSH 0x0                            ; 00440a44
    SUB ECX,EAX                         ; 00440a46
    LEA EAX,[ESP + 0x4]                 ; 00440a48
    PUSH EAX                            ; 00440a4c
    MOV dword ptr [ESI],ECX             ; 00440a4d
    CALL support_trstream.cpp_CInStreamMemory_dtor_FUN_005741d0 ; 00440a4f
        ;   XREF to: 005741d0 (UNCONDITIONAL_CALL)  ; CInStreamMemory * support_trstream.cpp_CInStreamMemory_dtor_FUN_005741d0(CInStreamMemory * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00440a54
    MOV EAX,EBX                         ; 00440a57
    ADD ESP,0x14                        ; 00440a59
    POP EBP                             ; 00440a5c
    POP EDI                             ; 00440a5d
    POP ESI                             ; 00440a5e
    POP EBX                             ; 00440a5f
    RET                                 ; 00440a60

