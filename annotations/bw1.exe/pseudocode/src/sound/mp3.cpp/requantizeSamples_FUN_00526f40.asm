; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_requantizeSamples_FUN_00526f40(int param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0052b450 at 0052b570
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00526f40
        ;   Label: sound_mp3.cpp_requantizeSamples_FUN_00526f40
    PUSH ESI                            ; 00526f41
    PUSH EDI                            ; 00526f42
    PUSH EBP                            ; 00526f43
    MOV EBP,ESP                         ; 00526f44
    SUB ESP,0x20                        ; 00526f46
    AND ESP,0xfffffff8                  ; 00526f49
    MOV EAX,dword ptr [EBP + 0x20]      ; 00526f4c
    XOR EDX,EDX                         ; 00526f4f
    MOV EAX,dword ptr [EAX + 0x10]      ; 00526f51
    MOV dword ptr [ESP + 0x8],EDX       ; 00526f54
    MOV dword ptr [ESP + 0x10],EAX      ; 00526f58
    XOR ECX,ECX                         ; 00526f5c
        ;   Label: LAB_00526f5c
    MOV EBX,dword ptr [ESP + 0x10]      ; 00526f5e
    MOV dword ptr [ESP + 0x18],ECX      ; 00526f62
    TEST EBX,EBX                        ; 00526f66
    JLE 0x00526fc5                      ; 00526f68
        ;   XREF to: 00526fc5 (CONDITIONAL_JUMP)  ; LAB_00526fc5
    MOV EAX,dword ptr [ESP + 0x8]       ; 00526f6a
    MOV EDX,dword ptr [EBP + 0x18]      ; 00526f6e
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00526f71
    MOV EDI,dword ptr [ESP + 0x8]       ; 00526f74
    MOV ESI,dword ptr [EBP + 0x14]      ; 00526f78
    MOV dword ptr [ESP + 0xc],EAX       ; 00526f7b
    ADD EDI,ESI                         ; 00526f7f
    ADD EAX,EDX                         ; 00526f81
    MOV EDX,dword ptr [ESP + 0x8]       ; 00526f83
    MOV EBX,EAX                         ; 00526f87
    ADD EDX,ECX                         ; 00526f89
    IMUL ECX,dword ptr [ESP + 0x18],0x180 ; 00526f8b
        ;   Label: LAB_00526f8b
    MOV ESI,dword ptr [EDX]             ; 00526f93
    TEST ESI,ESI                        ; 00526f95
    JNZ 0x00526fdf                      ; 00526f97
        ;   XREF to: 00526fdf (CONDITIONAL_JUMP)  ; LAB_00526fdf
    MOV dword ptr [EBX],ESI             ; 00526f99
    MOV ESI,dword ptr [ESP + 0x18]      ; 00526f9b
        ;   Label: LAB_00526f9b
    ADD EBX,0x180                       ; 00526f9f
    ADD EDX,0x80                        ; 00526fa5
    INC ESI                             ; 00526fab
    ADD EDI,0x180                       ; 00526fac
    MOV dword ptr [ESP + 0x18],ESI      ; 00526fb2
    MOV ECX,ESI                         ; 00526fb6
    MOV ESI,dword ptr [ESP + 0x10]      ; 00526fb8
    ADD EAX,0x180                       ; 00526fbc
    CMP ECX,ESI                         ; 00526fc1
    JL 0x00526f8b                       ; 00526fc3
        ;   XREF to: 00526f8b (CONDITIONAL_JUMP)  ; LAB_00526f8b
    MOV EDI,dword ptr [ESP + 0x8]       ; 00526fc5
        ;   Label: LAB_00526fc5
    ADD EDI,0x4                         ; 00526fc9
    MOV dword ptr [ESP + 0x8],EDI       ; 00526fcc
    CMP EDI,0x80                        ; 00526fd0
    JNZ 0x00526f5c                      ; 00526fd6
        ;   XREF to: 00526f5c (CONDITIONAL_JUMP)  ; LAB_00526f5c
    MOV ESP,EBP                         ; 00526fd8
    POP EBP                             ; 00526fda
    POP EDI                             ; 00526fdb
    POP ESI                             ; 00526fdc
    POP EBX                             ; 00526fdd
    RET                                 ; 00526fde
    INC ESI                             ; 00526fdf
        ;   Label: LAB_00526fdf
    MOV dword ptr [ESP + 0x14],ESI      ; 00526fe0
    ADD ECX,dword ptr [EBP + 0x14]      ; 00526fe4
    MOV ESI,dword ptr [ESP + 0xc]       ; 00526fe7
    ADD ESI,ECX                         ; 00526feb
    MOV ECX,dword ptr [EDX]             ; 00526fed
    MOV ESI,dword ptr [ESI]             ; 00526fef
    SHR ESI,CL                          ; 00526ff1
    MOV ECX,ESI                         ; 00526ff3
    AND ECX,0x1                         ; 00526ff5
    CMP ECX,0x1                         ; 00526ff8
    JNZ 0x00527073                      ; 00526ffb
        ;   XREF to: 00527073 (CONDITIONAL_JUMP)  ; LAB_00527073
    MOV dword ptr [EBX],0x0             ; 00526ffd
    MOV ECX,dword ptr [ESP + 0x14]      ; 00527003
        ;   Label: LAB_00527003
    MOV ESI,0x1                         ; 00527007
    DEC ECX                             ; 0052700c
    SHL ESI,CL                          ; 0052700d
    MOV ECX,ESI                         ; 0052700f
    DEC ESI                             ; 00527011
    MOV dword ptr [ESP + 0x1c],ESI      ; 00527012
    MOV ESI,dword ptr [EDI]             ; 00527016
    AND ESI,dword ptr [ESP + 0x1c]      ; 00527018
    MOV dword ptr [ESP + 0x1c],ESI      ; 0052701c
    XOR ESI,ESI                         ; 00527020
    MOV dword ptr [ESP + 0x4],ESI       ; 00527022
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00527026
    MOV dword ptr [ESP],ESI             ; 0052702a
    MOV dword ptr [ESP + 0x1c],ECX      ; 0052702d
    FILD qword ptr [ESP]                ; 00527031
    FILD dword ptr [ESP + 0x1c]         ; 00527034
    FLD1                                ; 00527038
    FDIVRP                              ; 0052703a
    MOV CL,byte ptr [ESP + 0x14]        ; 0052703c
    MOV ESI,0x1                         ; 00527040
    FXCH                                ; 00527045
    FMUL ST1                            ; 00527047
    SHL ESI,CL                          ; 00527049
    FLD float ptr [EAX]                 ; 0052704b
    FXCH                                ; 0052704d
    FADD ST0,ST1                        ; 0052704f
    MOV dword ptr [ESP + 0x1c],ESI      ; 00527051
    FSTP ST1                            ; 00527055
    FADDP                               ; 00527057
    LEA ECX,[ESI + -0x1]                ; 00527059
    FILD dword ptr [ESP + 0x1c]         ; 0052705c
    FMULP                               ; 00527060
    MOV dword ptr [ESP + 0x1c],ECX      ; 00527062
    FILD dword ptr [ESP + 0x1c]         ; 00527066
    FDIVP                               ; 0052706a
    FSTP float ptr [EAX]                ; 0052706c
    JMP 0x00526f9b                      ; 0052706e
        ;   XREF to: 00526f9b (UNCONDITIONAL_JUMP)  ; LAB_00526f9b
    MOV dword ptr [EBX],0xbf800000      ; 00527073
        ;   Label: LAB_00527073
    JMP 0x00527003                      ; 00527079
        ;   XREF to: 00527003 (UNCONDITIONAL_JUMP)  ; LAB_00527003

