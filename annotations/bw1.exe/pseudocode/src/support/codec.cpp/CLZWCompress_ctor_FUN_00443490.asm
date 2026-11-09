; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLZWCompress * __cdecl support_codec_cpp_CLZWCompress_ctor_FUN_00443490(CLZWCompress *this_ptr,int buffer_size,int num_bits)
;
; Parameters:
; CLZWCompress *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   buffer_size
; int              Stack[0xc]:4   num_bits
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00453610 at 004537b7
;   core_game.cpp_FUN_004d6420 at 004d677e
;
; Referenced Globals:
;   undefined1* PTR_support_codec.cpp_CLZWCompress_dtor_FUN_00444270_005fd984 = 00444270
;
; Called Functions:
;   support_codec.cpp_CCodec_ctor_FUN_00442ba0
;   support_codec.cpp_CLZWDictionary_ctor_FUN_00442f70
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00443490
        ;   Label: support_codec.cpp_CLZWCompress_ctor_FUN_00443490
    PUSH EAX                            ; 00443494
    CALL support_codec.cpp_CCodec_ctor_FUN_00442ba0 ; 00443495
        ;   XREF to: 00442ba0 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_ctor_FUN_00442ba0(CCodec * this_ptr)
    ADD ESP,0x4                         ; 0044349a
    ADD EAX,0x4                         ; 0044349d
    PUSH EAX                            ; 004434a0
    CALL support_codec.cpp_CLZWDictionary_ctor_FUN_00442f70 ; 004434a1
        ;   XREF to: 00442f70 (UNCONDITIONAL_CALL)  ; CLZWDictionary * support_codec.cpp_CLZWDictionary_ctor_FUN_00442f70(CLZWDictionary * this_ptr)
    ADD ESP,0x4                         ; 004434a6
    SUB EAX,0x4                         ; 004434a9
    MOV EDX,dword ptr [ESP + 0x8]       ; 004434ac
    MOV dword ptr [EAX + 0x20],EDX      ; 004434b0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004434b3
    MOV dword ptr [EAX + 0x24],EDX      ; 004434b7
    MOV EDX,0xffffffff                  ; 004434ba
    MOV CL,byte ptr [EAX + 0x24]        ; 004434bf
    MOV dword ptr [EAX],0x5fd984        ; 004434c2 | PTR_support_codec.cpp_CLZWCompress_dtor_FUN_00444270_005fd984
    SHL EDX,CL                          ; 004434c8
    MOV dword ptr [EAX + 0x28],EDX      ; 004434ca
    NOT EDX                             ; 004434cd
    MOV dword ptr [EAX + 0x28],EDX      ; 004434cf
    RET                                 ; 004434d2

