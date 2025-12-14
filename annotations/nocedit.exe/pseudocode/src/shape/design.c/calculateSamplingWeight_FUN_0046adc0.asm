; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl double shape_design.c_calculateSamplingWeight_FUN_0046adc0(double current_pos, double start_coord, double end_coord)
;
; Parameters:
; double           Stack[0x8]:8   current_pos
; double           Stack[0x10]:8   start_coord
; double           Stack[0x18]:8   end_coord
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   shape_design.c_sampleAndFilterPixel_FUN_0046ae20 at 0046af2c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046adc0
        ;   Label: shape_design.c_calculateSamplingWeight_FUN_0046adc0
    PUSH ESI                            ; 0046adc1
    PUSH EDI                            ; 0046adc2
    PUSH EBP                            ; 0046adc3
    MOV EBP,ESP                         ; 0046adc4
    SUB ESP,0x10                        ; 0046adc6
    FLD double ptr [EBP + 0x24]         ; 0046adcc
    FSUB double ptr [EBP + 0x14]        ; 0046adcf
    FSTP double ptr [EBP + -0x8]        ; 0046add2
    FLD1                                ; 0046add5
    FCOMP double ptr [EBP + -0x8]       ; 0046add7
    FNSTSW AX                           ; 0046adda
    SAHF                                ; 0046addc
    JNC 0x0046aded                      ; 0046addd
        ;   XREF to: 0046aded (CONDITIONAL_JUMP)  ; LAB_0046aded
    MOV dword ptr [EBP + -0x8],0x0      ; 0046addf
    MOV dword ptr [EBP + -0x4],0x3ff00000 ; 0046ade6
    FLD double ptr [EBP + 0x1c]         ; 0046aded
        ;   Label: LAB_0046aded
    FCOMP double ptr [EBP + 0x14]       ; 0046adf0
    FNSTSW AX                           ; 0046adf3
    SAHF                                ; 0046adf5
    JBE 0x0046ae04                      ; 0046adf6
        ;   XREF to: 0046ae04 (CONDITIONAL_JUMP)  ; LAB_0046ae04
    FLD double ptr [EBP + 0x1c]         ; 0046adf8
    FSUB double ptr [EBP + 0x14]        ; 0046adfb
    FMUL double ptr [EBP + -0x8]        ; 0046adfe
    FSTP double ptr [EBP + -0x8]        ; 0046ae01
    MOV EAX,dword ptr [EBP + -0x8]      ; 0046ae04
        ;   Label: LAB_0046ae04
    MOV dword ptr [EBP + -0x10],EAX     ; 0046ae07
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046ae0a
    MOV dword ptr [EBP + -0xc],EAX      ; 0046ae0d
    MOV EAX,dword ptr [EBP + -0x10]     ; 0046ae10
    MOV EDX,dword ptr [EBP + -0xc]      ; 0046ae13
    MOV ESP,EBP                         ; 0046ae16
    POP EBP                             ; 0046ae18
    POP EDI                             ; 0046ae19
    POP ESI                             ; 0046ae1a
    POP EBX                             ; 0046ae1b
    RET                                 ; 0046ae1c

