; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_CPoly_flipNormal_FUN_005cdfe0(CPoly *this_ptr)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cdfe0
        ;   Label: shape_superopt.cpp_CPoly_flipNormal_FUN_005cdfe0
    PUSH EBP                            ; 005cdfe1
    MOV EBP,ESP                         ; 005cdfe2
    SUB ESP,0x28                        ; 005cdfe4
    AND ESP,0xfffffff8                  ; 005cdfe7
    MOV EDX,dword ptr [EBP + 0xc]       ; 005cdfea
    MOV ECX,dword ptr [EDX + 0x8]       ; 005cdfed
    MOV EAX,dword ptr [EDX + 0x4]       ; 005cdff0
    MOV dword ptr [EDX + 0x4],ECX       ; 005cdff3
    LEA ECX,[EDX + 0x10]                ; 005cdff6
    MOV dword ptr [EDX + 0x8],EAX       ; 005cdff9
    MOV EAX,dword ptr [ECX]             ; 005cdffc
    MOV dword ptr [ESP],EAX             ; 005cdffe
    MOV EAX,dword ptr [ECX + 0x4]       ; 005ce001
    MOV dword ptr [ESP + 0x4],EAX       ; 005ce004
    MOV EAX,dword ptr [ECX + 0x8]       ; 005ce008
    MOV dword ptr [ESP + 0x8],EAX       ; 005ce00b
    MOV EAX,dword ptr [ECX + 0xc]       ; 005ce00f
    MOV dword ptr [ESP + 0xc],EAX       ; 005ce012
    LEA EAX,[EDX + 0x20]                ; 005ce016
    MOV EBX,dword ptr [EAX]             ; 005ce019
    MOV dword ptr [ECX],EBX             ; 005ce01b
    MOV EBX,dword ptr [EAX + 0x4]       ; 005ce01d
    MOV dword ptr [ECX + 0x4],EBX       ; 005ce020
    MOV EBX,dword ptr [EAX + 0x8]       ; 005ce023
    MOV dword ptr [ECX + 0x8],EBX       ; 005ce026
    MOV EBX,dword ptr [EAX + 0xc]       ; 005ce029
    MOV dword ptr [ECX + 0xc],EBX       ; 005ce02c
    MOV ECX,dword ptr [ESP]             ; 005ce02f
    MOV dword ptr [EAX],ECX             ; 005ce032
    MOV ECX,dword ptr [ESP + 0x4]       ; 005ce034
    MOV dword ptr [EAX + 0x4],ECX       ; 005ce038
    MOV ECX,dword ptr [ESP + 0x8]       ; 005ce03b
    MOV dword ptr [EAX + 0x8],ECX       ; 005ce03f
    MOV ECX,dword ptr [ESP + 0xc]       ; 005ce042
    MOV dword ptr [EAX + 0xc],ECX       ; 005ce046
    FLD double ptr [EDX + 0x40]         ; 005ce049
    FCHS                                ; 005ce04c
    FSTP double ptr [ESP + 0x10]        ; 005ce04e
    FLD double ptr [EDX + 0x48]         ; 005ce052
    MOV EAX,dword ptr [ESP + 0x10]      ; 005ce055
    FCHS                                ; 005ce059
    FSTP double ptr [ESP + 0x18]        ; 005ce05b
    FLD double ptr [EDX + 0x50]         ; 005ce05f
    FCHS                                ; 005ce062
    FSTP double ptr [ESP + 0x20]        ; 005ce064
    MOV dword ptr [EDX + 0x40],EAX      ; 005ce068
    MOV EAX,dword ptr [ESP + 0x14]      ; 005ce06b
    MOV dword ptr [EDX + 0x44],EAX      ; 005ce06f
    MOV EAX,dword ptr [ESP + 0x18]      ; 005ce072
    MOV dword ptr [EDX + 0x48],EAX      ; 005ce076
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005ce079
    MOV dword ptr [EDX + 0x4c],EAX      ; 005ce07d
    MOV EAX,dword ptr [ESP + 0x20]      ; 005ce080
    MOV dword ptr [EDX + 0x50],EAX      ; 005ce084
    MOV EAX,dword ptr [ESP + 0x24]      ; 005ce087
    MOV dword ptr [EDX + 0x54],EAX      ; 005ce08b
    MOV ESP,EBP                         ; 005ce08e
    POP EBP                             ; 005ce090
    POP EBX                             ; 005ce091
    RET                                 ; 005ce092

