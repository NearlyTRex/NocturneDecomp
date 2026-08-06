; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLZWCompress * __cdecl support_codec_cpp_CLZWCompress_ctor_FUN_00439830(CLZWCompress *this_ptr,int buffer_size,int num_bits)
;
; Parameters:
; CLZWCompress *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   buffer_size
; int              Stack[0xc]:4   num_bits
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_FUN_00446810 at 004469bc
;   core_game.cpp_CGame_FUN_004a3b90 at 004a3f0a
;
; Referenced Globals:
;   CCodec_vtable g_CLZWCompressVTable
;
; Called Functions:
;   support_codec.cpp_CCodec_ctor_FUN_00438f20
;   support_codec.cpp_CLZWDictionary_ctor_FUN_00439350
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00439830
        ;   Label: support_codec.cpp_CLZWCompress_ctor_FUN_00439830
    PUSH EAX                            ; 00439834
    CALL support_codec.cpp_CCodec_ctor_FUN_00438f20 ; 00439835
        ;   XREF to: 00438f20 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_ctor_FUN_00438f20(CCodec * this_ptr)
    ADD ESP,0x4                         ; 0043983a
    ADD EAX,0x4                         ; 0043983d
    PUSH EAX                            ; 00439840
    CALL support_codec.cpp_CLZWDictionary_ctor_FUN_00439350 ; 00439841
        ;   XREF to: 00439350 (UNCONDITIONAL_CALL)  ; CLZWDictionary * support_codec.cpp_CLZWDictionary_ctor_FUN_00439350(CLZWDictionary * this_ptr)
    ADD ESP,0x4                         ; 00439846
    SUB EAX,0x4                         ; 00439849
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043984c
    MOV dword ptr [EAX + 0x20],EDX      ; 00439850
    MOV EDX,dword ptr [ESP + 0xc]       ; 00439853
    MOV dword ptr [EAX + 0x24],EDX      ; 00439857
    MOV EDX,0xffffffff                  ; 0043985a
    MOV CL,byte ptr [EAX + 0x24]        ; 0043985f
    MOV dword ptr [EAX],0x59b414        ; 00439862 | g_CLZWCompressVTable
    SHL EDX,CL                          ; 00439868
    MOV dword ptr [EAX + 0x28],EDX      ; 0043986a
    NOT EDX                             ; 0043986d
    MOV dword ptr [EAX + 0x28],EDX      ; 0043986f
    RET                                 ; 00439872

