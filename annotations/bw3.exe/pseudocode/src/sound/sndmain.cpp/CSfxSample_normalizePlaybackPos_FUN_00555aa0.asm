; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl sound_sndmain_cpp_CSfxSample_normalizePlaybackPos_FUN_00555aa0(CSfxSample *this_ptr,double position,uint input_type)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
; double           Stack[0x8]:8   position
; uint             Stack[0x10]:4   input_type
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[2]:
;   sound_sndmain.cpp_CSfxSample_seek_FUN_005537c0 at 005537f1
;   sound_sndmain.cpp_CSfxSlot_seek_FUN_00555750 at 005557c4
;
; Called Functions:
;   crt_math.c_floor_FUN_005a3600
;   sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00555930
;   sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_00555b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555aa0
        ;   Label: sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_00555aa0
    PUSH ESI                            ; 00555aa1
    PUSH EDI                            ; 00555aa2
    PUSH EBP                            ; 00555aa3
    SUB ESP,0x10                        ; 00555aa4
    MOV EBX,dword ptr [ESP + 0x24]      ; 00555aa7
    PUSH 0x2                            ; 00555aab
    MOV EDX,dword ptr [ESP + 0x34]      ; 00555aad
    PUSH EDX                            ; 00555ab1
    MOV ECX,dword ptr [ESP + 0x34]      ; 00555ab2
    PUSH ECX                            ; 00555ab6
    MOV ESI,dword ptr [ESP + 0x34]      ; 00555ab7
    PUSH ESI                            ; 00555abb
    PUSH EBX                            ; 00555abc
    CALL sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00555930 ; 00555abd
        ;   XREF to: 00555930 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00555930(CSampleInfo * this_ptr, double position, uint input_type, uint output_type)
    MOV dword ptr [ESP + 0x1c],EAX      ; 00555ac2
    MOV dword ptr [ESP + 0x20],EDX      ; 00555ac6
    FLD double ptr [ESP + 0x1c]         ; 00555aca
    ADD ESP,0x14                        ; 00555ace
    PUSH EBX                            ; 00555ad1
    FSTP double ptr [ESP + 0x2c]        ; 00555ad2
    CALL sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_00555b80 ; 00555ad6
        ;   XREF to: 00555b80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_00555b80(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00555adb
    TEST EAX,EAX                        ; 00555ade
    JNZ 0x00555b43                      ; 00555ae0
        ;   XREF to: 00555b43 (CONDITIONAL_JUMP)  ; LAB_00555b43
    FLDZ                                ; 00555ae2
    FCOMP double ptr [ESP + 0x28]       ; 00555ae4
    FNSTSW AX                           ; 00555ae8
    SAHF                                ; 00555aea
    JA 0x00555b6b                       ; 00555aeb
        ;   XREF to: 00555b6b (CONDITIONAL_JUMP)  ; LAB_00555b6b
    FLD1                                ; 00555af1
    FCOMP double ptr [ESP + 0x28]       ; 00555af3
    FNSTSW AX                           ; 00555af7
    SAHF                                ; 00555af9
    JNC 0x00555b0b                      ; 00555afa
        ;   XREF to: 00555b0b (CONDITIONAL_JUMP)  ; LAB_00555b0b
    XOR EDI,EDI                         ; 00555afc
    MOV EBP,0x3ff00000                  ; 00555afe
    MOV dword ptr [ESP + 0x28],EDI      ; 00555b03
    MOV dword ptr [ESP + 0x2c],EBP      ; 00555b07
    MOV EDI,dword ptr [ESP + 0x30]      ; 00555b0b
        ;   Label: LAB_00555b0b
    PUSH EDI                            ; 00555b0f
    PUSH 0x2                            ; 00555b10
    MOV EBP,dword ptr [ESP + 0x34]      ; 00555b12
    PUSH EBP                            ; 00555b16
    MOV EAX,dword ptr [ESP + 0x34]      ; 00555b17
    PUSH EAX                            ; 00555b1b
    PUSH EBX                            ; 00555b1c
    CALL sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00555930 ; 00555b1d
        ;   XREF to: 00555930 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00555930(CSampleInfo * this_ptr, double position, uint input_type, uint output_type)
    MOV dword ptr [ESP + 0x1c],EAX      ; 00555b22
    MOV dword ptr [ESP + 0x20],EDX      ; 00555b26
    FLD double ptr [ESP + 0x1c]         ; 00555b2a
    ADD ESP,0x14                        ; 00555b2e
    FSTP double ptr [ESP]               ; 00555b31
    MOV EAX,dword ptr [ESP]             ; 00555b34
    MOV EDX,dword ptr [ESP + 0x4]       ; 00555b37
    ADD ESP,0x10                        ; 00555b3b
    POP EBP                             ; 00555b3e
    POP EDI                             ; 00555b3f
    POP ESI                             ; 00555b40
    POP EBX                             ; 00555b41
    RET                                 ; 00555b42
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00555b43
        ;   Label: LAB_00555b43
    PUSH ECX                            ; 00555b47
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00555b48
    PUSH ESI                            ; 00555b4c
    CALL crt_math.c_floor_FUN_005a3600  ; 00555b4d
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [ESP + 0x10],EAX      ; 00555b52
    MOV dword ptr [ESP + 0x14],EDX      ; 00555b56
    FLD double ptr [ESP + 0x10]         ; 00555b5a
    ADD ESP,0x8                         ; 00555b5e
    FSUBR double ptr [ESP + 0x28]       ; 00555b61
    FSTP double ptr [ESP + 0x28]        ; 00555b65
    JMP 0x00555b0b                      ; 00555b69
        ;   XREF to: 00555b0b (UNCONDITIONAL_JUMP)  ; LAB_00555b0b
    XOR EAX,EAX                         ; 00555b6b
        ;   Label: LAB_00555b6b
    MOV dword ptr [ESP + 0x28],EAX      ; 00555b6d
    MOV dword ptr [ESP + 0x2c],EAX      ; 00555b71
    JMP 0x00555b0b                      ; 00555b75
        ;   XREF to: 00555b0b (UNCONDITIONAL_JUMP)  ; LAB_00555b0b

