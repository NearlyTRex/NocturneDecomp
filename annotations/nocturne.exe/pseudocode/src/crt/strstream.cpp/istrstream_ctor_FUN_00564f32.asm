; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_strstream_cpp_istrstream_ctor_FUN_00564f32(undefined4 *param_1,byte param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[2]:
;   support_codec.cpp_CCodec_processBuffer_FUN_00439120 at 00439143
;   support_codec.cpp_CCodec_processFromBuffer_FUN_004390b0 at 004390d2
;
; Referenced Globals:
;   undefined4 DAT_005a4730
;   undefined4 DAT_005a4738
;   void* PTR_crt_strstream.cpp_istrstream_dtor_FUN_00564fd8_005a4744 = 00564fd8
;   void* PTR_crt_unknown.c_FUN_00564faa_005a474c = 00564faa
;   void* PTR_crt_unknown.c_FUN_00564fc0_005a4754 = 00564fc0
;
; Called Functions:
;   FUN_0056b405
;   FUN_0056b503
;   FUN_0056b67d
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00564f32
        ;   Label: crt_strstream.cpp_istrstream_ctor_FUN_00564f32
    TEST byte ptr [ESP + 0x8],0x1       ; 00564f36
    JZ 0x00564f8c                       ; 00564f3b
        ;   XREF to: 00564f8c (CONDITIONAL_JUMP)  ; LAB_00564f8c
    PUSH 0x0                            ; 00564f3d
        ;   Label: LAB_00564f3d
    MOV EDX,dword ptr [ESP + 0x14]      ; 00564f3f
    PUSH EDX                            ; 00564f43
    MOV ECX,dword ptr [ESP + 0x14]      ; 00564f44
    PUSH ECX                            ; 00564f48
    PUSH 0x1                            ; 00564f49
    PUSH EAX                            ; 00564f4b
    CALL FUN_0056b405                   ; 00564f4c
        ;   XREF to: 0056b405 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b405()
    ADD ESP,0x14                        ; 00564f51
    PUSH 0x1                            ; 00564f54
    ADD EAX,0x48                        ; 00564f56
    PUSH EAX                            ; 00564f59
    CALL FUN_0056b67d                   ; 00564f5a
        ;   XREF to: 0056b67d (UNCONDITIONAL_CALL)  ; undefined FUN_0056b67d()
    SUB EAX,0x48                        ; 00564f5f
    MOV EDX,dword ptr [EAX]             ; 00564f62
    MOV ECX,dword ptr [EDX + 0x4]       ; 00564f64
    LEA EDX,[EAX + ECX*0x1]             ; 00564f67
    MOV dword ptr [EDX + -0x4],ECX      ; 00564f6a
    MOV dword ptr [EAX + 0x44],0x5a4744 ; 00564f6d | PTR_crt_strstream.cpp_istrstream_dtor_FUN_00564fd8_005a4744
    MOV EDX,dword ptr [EAX]             ; 00564f74
    MOV dword ptr [EAX + 0x50],0x5a474c ; 00564f76 | PTR_crt_unknown.c_FUN_00564faa_005a474c
    MOV EDX,dword ptr [EDX + 0x4]       ; 00564f7d
    ADD ESP,0x8                         ; 00564f80
    MOV dword ptr [EDX + EAX*0x1 + 0x28],0x5a4754 ; 00564f83 | PTR_crt_unknown.c_FUN_00564fc0_005a4754
    RET                                 ; 00564f8b
    MOV dword ptr [EAX],0x5a4730        ; 00564f8c | DAT_005a4730
        ;   Label: LAB_00564f8c
    ADD EAX,0x58                        ; 00564f92
    PUSH EAX                            ; 00564f95
    MOV dword ptr [EAX + -0x10],0x5a4738 ; 00564f96 | DAT_005a4738
    CALL FUN_0056b503                   ; 00564f9d
        ;   XREF to: 0056b503 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b503()
    ADD ESP,0x4                         ; 00564fa2
    SUB EAX,0x58                        ; 00564fa5
    JMP 0x00564f3d                      ; 00564fa8
        ;   XREF to: 00564f3d (UNCONDITIONAL_JUMP)  ; LAB_00564f3d

