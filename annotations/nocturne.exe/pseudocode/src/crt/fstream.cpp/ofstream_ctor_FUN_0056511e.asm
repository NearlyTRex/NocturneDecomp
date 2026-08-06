; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_fstream_cpp_ofstream_ctor_FUN_0056511e(void *this_ptr,int ctor_flags,char *filename,int open_mode,int buffer_size)
;
; Parameters:
; void *           Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   ctor_flags
; char *           Stack[0xc]:4   filename
; int              Stack[0x10]:4   open_mode
; int              Stack[0x14]:4   buffer_size
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_FUN_00446810 at 004468da
;   support_codec.cpp_CCodec_processFiles_FUN_004391b0 at 0043920d
;
; Referenced Globals:
;   undefined4 DAT_005a4810
;   undefined4 DAT_005a4818
;   void* PTR_crt_fstream.cpp_ofstream_dtor_FUN_005651ca_005a4824 = 005651ca
;   void* PTR_crt_unknown.c_FUN_0056519c_005a482c = 0056519c
;   void* PTR_crt_unknown.c_FUN_005651b2_005a4834 = 005651b2
;
; Called Functions:
;   crt_fstream.cpp_fstreambase_ctor_FUN_0056b75d
;   crt_iostream.cpp_ios_ctor_FUN_0056b503
;   crt_iostream.cpp_ostream_ctor_FUN_0056b4a9
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056511e
        ;   Label: crt_fstream.cpp_ofstream_ctor_FUN_0056511e
    TEST byte ptr [ESP + 0x8],0x1       ; 00565122
    JZ 0x0056517e                       ; 00565127
        ;   XREF to: 0056517e (CONDITIONAL_JUMP)  ; LAB_0056517e
    MOV EDX,dword ptr [ESP + 0x14]      ; 00565129
        ;   Label: LAB_00565129
    PUSH EDX                            ; 0056512d
    MOV EDX,dword ptr [ESP + 0x14]      ; 0056512e
    OR DL,0x2                           ; 00565132
    PUSH EDX                            ; 00565135
    MOV ECX,dword ptr [ESP + 0x14]      ; 00565136
    PUSH ECX                            ; 0056513a
    PUSH 0x1                            ; 0056513b
    PUSH EAX                            ; 0056513d
    CALL crt_fstream.cpp_fstreambase_ctor_FUN_0056b75d ; 0056513e
        ;   XREF to: 0056b75d (UNCONDITIONAL_CALL)  ; undefined crt_fstream.cpp_fstreambase_ctor_FUN_0056b75d()
    ADD ESP,0x14                        ; 00565143
    PUSH 0x1                            ; 00565146
    ADD EAX,0x44                        ; 00565148
    PUSH EAX                            ; 0056514b
    CALL crt_iostream.cpp_ostream_ctor_FUN_0056b4a9 ; 0056514c
        ;   XREF to: 0056b4a9 (UNCONDITIONAL_CALL)  ; _ostream * crt_iostream.cpp_ostream_ctor_FUN_0056b4a9(_ostream * this_ptr, uint c1)
    SUB EAX,0x44                        ; 00565151
    MOV EDX,dword ptr [EAX]             ; 00565154
    MOV EDX,dword ptr [EDX + 0x4]       ; 00565156
    LEA ECX,[EAX + EDX*0x1]             ; 00565159
    MOV dword ptr [ECX + -0x4],EDX      ; 0056515c
    MOV dword ptr [EAX + 0x40],0x5a4824 ; 0056515f | PTR_crt_fstream.cpp_ofstream_dtor_FUN_005651ca_005a4824
    MOV EDX,dword ptr [EAX]             ; 00565166
    MOV dword ptr [EAX + 0x48],0x5a482c ; 00565168 | PTR_crt_unknown.c_FUN_0056519c_005a482c
    MOV EDX,dword ptr [EDX + 0x4]       ; 0056516f
    ADD ESP,0x8                         ; 00565172
    MOV dword ptr [EDX + EAX*0x1 + 0x28],0x5a4834 ; 00565175 | PTR_crt_unknown.c_FUN_005651b2_005a4834
    RET                                 ; 0056517d
    MOV dword ptr [EAX],0x5a4810        ; 0056517e | DAT_005a4810
        ;   Label: LAB_0056517e
    ADD EAX,0x50                        ; 00565184
    PUSH EAX                            ; 00565187
    MOV dword ptr [EAX + -0xc],0x5a4818 ; 00565188 | DAT_005a4818
    CALL crt_iostream.cpp_ios_ctor_FUN_0056b503 ; 0056518f
        ;   XREF to: 0056b503 (UNCONDITIONAL_CALL)  ; ios * crt_iostream.cpp_ios_ctor_FUN_0056b503(ios * this_ptr)
    ADD ESP,0x4                         ; 00565194
    SUB EAX,0x50                        ; 00565197
    JMP 0x00565129                      ; 0056519a
        ;   XREF to: 00565129 (UNCONDITIONAL_JUMP)  ; LAB_00565129

