; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl sound_sndmain_cpp_CSfxSample_normalizePlaybackPos_FUN_005725a0(CSfxSample *this_ptr,double position,uint input_type)
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
;   sound_sndmain.cpp_CSfxSample_seek_FUN_005702c0 at 005702f1
;   sound_sndmain.cpp_CSfxSlot_seek_FUN_00572250 at 005722c4
;
; Called Functions:
;   crt_math.c_floor_FUN_005c0880
;   sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00572430
;   sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_00572680
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005725a0
        ;   Label: sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_005725a0
    PUSH ESI                            ; 005725a1
    PUSH EDI                            ; 005725a2
    PUSH EBP                            ; 005725a3
    SUB ESP,0x10                        ; 005725a4
    MOV EBX,dword ptr [ESP + 0x24]      ; 005725a7
    PUSH 0x2                            ; 005725ab
    MOV EDX,dword ptr [ESP + 0x34]      ; 005725ad
    PUSH EDX                            ; 005725b1
    MOV ECX,dword ptr [ESP + 0x34]      ; 005725b2
    PUSH ECX                            ; 005725b6
    MOV ESI,dword ptr [ESP + 0x34]      ; 005725b7
    PUSH ESI                            ; 005725bb
    PUSH EBX                            ; 005725bc
    CALL sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00572430 ; 005725bd
        ;   XREF to: 00572430 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00572430(CSampleInfo * this_ptr, double position, uint input_type, uint output_type)
    MOV dword ptr [ESP + 0x1c],EAX      ; 005725c2
    MOV dword ptr [ESP + 0x20],EDX      ; 005725c6
    FLD double ptr [ESP + 0x1c]         ; 005725ca
    ADD ESP,0x14                        ; 005725ce
    PUSH EBX                            ; 005725d1
    FSTP double ptr [ESP + 0x2c]        ; 005725d2
    CALL sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_00572680 ; 005725d6
        ;   XREF to: 00572680 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_00572680(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005725db
    TEST EAX,EAX                        ; 005725de
    JNZ 0x00572643                      ; 005725e0
        ;   XREF to: 00572643 (CONDITIONAL_JUMP)  ; LAB_00572643
    FLDZ                                ; 005725e2
    FCOMP double ptr [ESP + 0x28]       ; 005725e4
    FNSTSW AX                           ; 005725e8
    SAHF                                ; 005725ea
    JA 0x0057266b                       ; 005725eb
        ;   XREF to: 0057266b (CONDITIONAL_JUMP)  ; LAB_0057266b
    FLD1                                ; 005725f1
    FCOMP double ptr [ESP + 0x28]       ; 005725f3
    FNSTSW AX                           ; 005725f7
    SAHF                                ; 005725f9
    JNC 0x0057260b                      ; 005725fa
        ;   XREF to: 0057260b (CONDITIONAL_JUMP)  ; LAB_0057260b
    XOR EDI,EDI                         ; 005725fc
    MOV EBP,0x3ff00000                  ; 005725fe
    MOV dword ptr [ESP + 0x28],EDI      ; 00572603
    MOV dword ptr [ESP + 0x2c],EBP      ; 00572607
    MOV EDI,dword ptr [ESP + 0x30]      ; 0057260b
        ;   Label: LAB_0057260b
    PUSH EDI                            ; 0057260f
    PUSH 0x2                            ; 00572610
    MOV EBP,dword ptr [ESP + 0x34]      ; 00572612
    PUSH EBP                            ; 00572616
    MOV EAX,dword ptr [ESP + 0x34]      ; 00572617
    PUSH EAX                            ; 0057261b
    PUSH EBX                            ; 0057261c
    CALL sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00572430 ; 0057261d
        ;   XREF to: 00572430 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00572430(CSampleInfo * this_ptr, double position, uint input_type, uint output_type)
    MOV dword ptr [ESP + 0x1c],EAX      ; 00572622
    MOV dword ptr [ESP + 0x20],EDX      ; 00572626
    FLD double ptr [ESP + 0x1c]         ; 0057262a
    ADD ESP,0x14                        ; 0057262e
    FSTP double ptr [ESP]               ; 00572631
    MOV EAX,dword ptr [ESP]             ; 00572634
    MOV EDX,dword ptr [ESP + 0x4]       ; 00572637
    ADD ESP,0x10                        ; 0057263b
    POP EBP                             ; 0057263e
    POP EDI                             ; 0057263f
    POP ESI                             ; 00572640
    POP EBX                             ; 00572641
    RET                                 ; 00572642
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00572643
        ;   Label: LAB_00572643
    PUSH ECX                            ; 00572647
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00572648
    PUSH ESI                            ; 0057264c
    CALL crt_math.c_floor_FUN_005c0880  ; 0057264d
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005c0880(double input_value)
    MOV dword ptr [ESP + 0x10],EAX      ; 00572652
    MOV dword ptr [ESP + 0x14],EDX      ; 00572656
    FLD double ptr [ESP + 0x10]         ; 0057265a
    ADD ESP,0x8                         ; 0057265e
    FSUBR double ptr [ESP + 0x28]       ; 00572661
    FSTP double ptr [ESP + 0x28]        ; 00572665
    JMP 0x0057260b                      ; 00572669
        ;   XREF to: 0057260b (UNCONDITIONAL_JUMP)  ; LAB_0057260b
    XOR EAX,EAX                         ; 0057266b
        ;   Label: LAB_0057266b
    MOV dword ptr [ESP + 0x28],EAX      ; 0057266d
    MOV dword ptr [ESP + 0x2c],EAX      ; 00572671
    JMP 0x0057260b                      ; 00572675
        ;   XREF to: 0057260b (UNCONDITIONAL_JUMP)  ; LAB_0057260b

