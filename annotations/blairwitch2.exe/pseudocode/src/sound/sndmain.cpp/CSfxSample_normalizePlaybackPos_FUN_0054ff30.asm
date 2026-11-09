; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl sound_sndmain_cpp_CSfxSample_normalizePlaybackPos_FUN_0054ff30(CSfxSample *this_ptr,double position,uint input_type)
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
;   sound_sndmain.cpp_CSfxSample_seek_FUN_0054dc50 at 0054dc81
;   sound_sndmain.cpp_CSfxSlot_seek_FUN_0054fbe0 at 0054fc54
;
; Called Functions:
;   crt_math.c_floor_FUN_005b84d0
;   sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_0054fdc0
;   sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_00550010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054ff30
        ;   Label: sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_0054ff30
    PUSH ESI                            ; 0054ff31
    PUSH EDI                            ; 0054ff32
    PUSH EBP                            ; 0054ff33
    SUB ESP,0x10                        ; 0054ff34
    MOV EBX,dword ptr [ESP + 0x24]      ; 0054ff37
    PUSH 0x2                            ; 0054ff3b
    MOV EDX,dword ptr [ESP + 0x34]      ; 0054ff3d
    PUSH EDX                            ; 0054ff41
    MOV ECX,dword ptr [ESP + 0x34]      ; 0054ff42
    PUSH ECX                            ; 0054ff46
    MOV ESI,dword ptr [ESP + 0x34]      ; 0054ff47
    PUSH ESI                            ; 0054ff4b
    PUSH EBX                            ; 0054ff4c
    CALL sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_0054fdc0 ; 0054ff4d
        ;   XREF to: 0054fdc0 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_0054fdc0(CSampleInfo * this_ptr, double position, uint input_type, uint output_type)
    MOV dword ptr [ESP + 0x1c],EAX      ; 0054ff52
    MOV dword ptr [ESP + 0x20],EDX      ; 0054ff56
    FLD double ptr [ESP + 0x1c]         ; 0054ff5a
    ADD ESP,0x14                        ; 0054ff5e
    PUSH EBX                            ; 0054ff61
    FSTP double ptr [ESP + 0x2c]        ; 0054ff62
    CALL sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_00550010 ; 0054ff66
        ;   XREF to: 00550010 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_00550010(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0054ff6b
    TEST EAX,EAX                        ; 0054ff6e
    JNZ 0x0054ffd3                      ; 0054ff70
        ;   XREF to: 0054ffd3 (CONDITIONAL_JUMP)  ; LAB_0054ffd3
    FLDZ                                ; 0054ff72
    FCOMP double ptr [ESP + 0x28]       ; 0054ff74
    FNSTSW AX                           ; 0054ff78
    SAHF                                ; 0054ff7a
    JA 0x0054fffb                       ; 0054ff7b
        ;   XREF to: 0054fffb (CONDITIONAL_JUMP)  ; LAB_0054fffb
    FLD1                                ; 0054ff81
    FCOMP double ptr [ESP + 0x28]       ; 0054ff83
    FNSTSW AX                           ; 0054ff87
    SAHF                                ; 0054ff89
    JNC 0x0054ff9b                      ; 0054ff8a
        ;   XREF to: 0054ff9b (CONDITIONAL_JUMP)  ; LAB_0054ff9b
    XOR EDI,EDI                         ; 0054ff8c
    MOV EBP,0x3ff00000                  ; 0054ff8e
    MOV dword ptr [ESP + 0x28],EDI      ; 0054ff93
    MOV dword ptr [ESP + 0x2c],EBP      ; 0054ff97
    MOV EDI,dword ptr [ESP + 0x30]      ; 0054ff9b
        ;   Label: LAB_0054ff9b
    PUSH EDI                            ; 0054ff9f
    PUSH 0x2                            ; 0054ffa0
    MOV EBP,dword ptr [ESP + 0x34]      ; 0054ffa2
    PUSH EBP                            ; 0054ffa6
    MOV EAX,dword ptr [ESP + 0x34]      ; 0054ffa7
    PUSH EAX                            ; 0054ffab
    PUSH EBX                            ; 0054ffac
    CALL sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_0054fdc0 ; 0054ffad
        ;   XREF to: 0054fdc0 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_0054fdc0(CSampleInfo * this_ptr, double position, uint input_type, uint output_type)
    MOV dword ptr [ESP + 0x1c],EAX      ; 0054ffb2
    MOV dword ptr [ESP + 0x20],EDX      ; 0054ffb6
    FLD double ptr [ESP + 0x1c]         ; 0054ffba
    ADD ESP,0x14                        ; 0054ffbe
    FSTP double ptr [ESP]               ; 0054ffc1
    MOV EAX,dword ptr [ESP]             ; 0054ffc4
    MOV EDX,dword ptr [ESP + 0x4]       ; 0054ffc7
    ADD ESP,0x10                        ; 0054ffcb
    POP EBP                             ; 0054ffce
    POP EDI                             ; 0054ffcf
    POP ESI                             ; 0054ffd0
    POP EBX                             ; 0054ffd1
    RET                                 ; 0054ffd2
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0054ffd3
        ;   Label: LAB_0054ffd3
    PUSH ECX                            ; 0054ffd7
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0054ffd8
    PUSH ESI                            ; 0054ffdc
    CALL crt_math.c_floor_FUN_005b84d0  ; 0054ffdd
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x10],EAX      ; 0054ffe2
    MOV dword ptr [ESP + 0x14],EDX      ; 0054ffe6
    FLD double ptr [ESP + 0x10]         ; 0054ffea
    ADD ESP,0x8                         ; 0054ffee
    FSUBR double ptr [ESP + 0x28]       ; 0054fff1
    FSTP double ptr [ESP + 0x28]        ; 0054fff5
    JMP 0x0054ff9b                      ; 0054fff9
        ;   XREF to: 0054ff9b (UNCONDITIONAL_JUMP)  ; LAB_0054ff9b
    XOR EAX,EAX                         ; 0054fffb
        ;   Label: LAB_0054fffb
    MOV dword ptr [ESP + 0x28],EAX      ; 0054fffd
    MOV dword ptr [ESP + 0x2c],EAX      ; 00550001
    JMP 0x0054ff9b                      ; 00550005
        ;   XREF to: 0054ff9b (UNCONDITIONAL_JUMP)  ; LAB_0054ff9b

