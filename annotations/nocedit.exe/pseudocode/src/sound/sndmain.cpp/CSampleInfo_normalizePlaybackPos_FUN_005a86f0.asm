; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl double sound_sndmain.cpp_CSampleInfo_normalizePlaybackPos_FUN_005a86f0(CSampleInfo * this_ptr, double position, uint input_type, uint output_type)
;
; Parameters:
; CSampleInfo *    Stack[0x8]:4   this_ptr
; double           Stack[0xc]:8   position
; uint             Stack[0x14]:4   input_type
; uint             Stack[0x18]:4   output_type
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[2]:
;   sound_sndmain.cpp_CSfxSample_seek_FUN_005a65a0 at 005a65d1
;   sound_sndmain.cpp_CSfxSlot_seek_FUN_005a8390 at 005a8404
;
; Called Functions:
;   crt_math.c_floor_FUN_005feb90
;   sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580
;   sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_005a87d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a86f0
        ;   Label: sound_sndmain.cpp_CSampleInfo_normalizePlaybackPos_FUN_005a86f0
    PUSH ESI                            ; 005a86f1
    PUSH EDI                            ; 005a86f2
    PUSH EBP                            ; 005a86f3
    SUB ESP,0x10                        ; 005a86f4
    MOV EBX,dword ptr [ESP + 0x24]      ; 005a86f7
    PUSH 0x2                            ; 005a86fb
    MOV EDX,dword ptr [ESP + 0x34]      ; 005a86fd
    PUSH EDX                            ; 005a8701
    MOV ECX,dword ptr [ESP + 0x34]      ; 005a8702
    PUSH ECX                            ; 005a8706
    MOV ESI,dword ptr [ESP + 0x34]      ; 005a8707
    PUSH ESI                            ; 005a870b
    PUSH EBX                            ; 005a870c
    CALL sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580 ; 005a870d
        ;   XREF to: 005a8580 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580(CSampleInfo * this_ptr, double position, uint input_type, uint output_type)
    MOV dword ptr [ESP + 0x1c],EAX      ; 005a8712
    MOV dword ptr [ESP + 0x20],EDX      ; 005a8716
    FLD double ptr [ESP + 0x1c]         ; 005a871a
    ADD ESP,0x14                        ; 005a871e
    PUSH EBX                            ; 005a8721
    FSTP double ptr [ESP + 0x2c]        ; 005a8722
    CALL sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_005a87d0 ; 005a8726
        ;   XREF to: 005a87d0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_005a87d0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005a872b
    TEST EAX,EAX                        ; 005a872e
    JNZ 0x005a8793                      ; 005a8730
        ;   XREF to: 005a8793 (CONDITIONAL_JUMP)  ; LAB_005a8793
    FLDZ                                ; 005a8732
    FCOMP double ptr [ESP + 0x28]       ; 005a8734
    FNSTSW AX                           ; 005a8738
    SAHF                                ; 005a873a
    JA 0x005a87bb                       ; 005a873b
        ;   XREF to: 005a87bb (CONDITIONAL_JUMP)  ; LAB_005a87bb
    FLD1                                ; 005a8741
    FCOMP double ptr [ESP + 0x28]       ; 005a8743
    FNSTSW AX                           ; 005a8747
    SAHF                                ; 005a8749
    JNC 0x005a875b                      ; 005a874a
        ;   XREF to: 005a875b (CONDITIONAL_JUMP)  ; LAB_005a875b
    XOR EDI,EDI                         ; 005a874c
    MOV EBP,0x3ff00000                  ; 005a874e
    MOV dword ptr [ESP + 0x28],EDI      ; 005a8753
    MOV dword ptr [ESP + 0x2c],EBP      ; 005a8757
    MOV EDI,dword ptr [ESP + 0x30]      ; 005a875b
        ;   Label: LAB_005a875b
    PUSH EDI                            ; 005a875f
    PUSH 0x2                            ; 005a8760
    MOV EBP,dword ptr [ESP + 0x34]      ; 005a8762
    PUSH EBP                            ; 005a8766
    MOV EAX,dword ptr [ESP + 0x34]      ; 005a8767
    PUSH EAX                            ; 005a876b
    PUSH EBX                            ; 005a876c
    CALL sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580 ; 005a876d
        ;   XREF to: 005a8580 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580(CSampleInfo * this_ptr, double position, uint input_type, uint output_type)
    MOV dword ptr [ESP + 0x1c],EAX      ; 005a8772
    MOV dword ptr [ESP + 0x20],EDX      ; 005a8776
    FLD double ptr [ESP + 0x1c]         ; 005a877a
    ADD ESP,0x14                        ; 005a877e
    FSTP double ptr [ESP]               ; 005a8781
    MOV EAX,dword ptr [ESP]             ; 005a8784
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a8787
    ADD ESP,0x10                        ; 005a878b
    POP EBP                             ; 005a878e
    POP EDI                             ; 005a878f
    POP ESI                             ; 005a8790
    POP EBX                             ; 005a8791
    RET                                 ; 005a8792
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005a8793
        ;   Label: LAB_005a8793
    PUSH ECX                            ; 005a8797
    MOV ESI,dword ptr [ESP + 0x2c]      ; 005a8798
    PUSH ESI                            ; 005a879c
    CALL crt_math.c_floor_FUN_005feb90  ; 005a879d
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x10],EAX      ; 005a87a2
    MOV dword ptr [ESP + 0x14],EDX      ; 005a87a6
    FLD double ptr [ESP + 0x10]         ; 005a87aa
    ADD ESP,0x8                         ; 005a87ae
    FSUBR double ptr [ESP + 0x28]       ; 005a87b1
    FSTP double ptr [ESP + 0x28]        ; 005a87b5
    JMP 0x005a875b                      ; 005a87b9
        ;   XREF to: 005a875b (UNCONDITIONAL_JUMP)  ; LAB_005a875b
    XOR EAX,EAX                         ; 005a87bb
        ;   Label: LAB_005a87bb
    MOV dword ptr [ESP + 0x28],EAX      ; 005a87bd
    MOV dword ptr [ESP + 0x2c],EAX      ; 005a87c1
    JMP 0x005a875b                      ; 005a87c5
        ;   XREF to: 005a875b (UNCONDITIONAL_JUMP)  ; LAB_005a875b

