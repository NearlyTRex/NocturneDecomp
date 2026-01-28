; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_design_c_samplePixelAndAccumulate_FUN_0046ad00 (void *rgb_buffer,void *alpha_buffer,int atlas_width,int atlas_height,int pixel_x, int pixel_y,double weight,double *red_accumulator,double *green_accumulator, double *blue_accumulator,double *alpha_accumulator)
;
; Parameters:
; void *           Stack[0x4]:4   rgb_buffer
; void *           Stack[0x8]:4   alpha_buffer
; int              Stack[0xc]:4   atlas_width
; int              Stack[0x10]:4   atlas_height
; int              Stack[0x14]:4   pixel_x
; int              Stack[0x18]:4   pixel_y
; double           Stack[0x1c]:8   weight
; double *         Stack[0x24]:4   red_accumulator
; double *         Stack[0x28]:4   green_accumulator
; double *         Stack[0x2c]:4   blue_accumulator
; double *         Stack[0x30]:4   alpha_accumulator
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_sampleAndFilterPixel_FUN_0046ae20 at 0046afb6
;
; Called Functions:
;   shape_design.c_wrapCoordinate_FUN_0046acc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046ad00
        ;   Label: shape_design.c_samplePixelAndAccumulate_FUN_0046ad00
    PUSH ESI                            ; 0046ad01
    PUSH EDI                            ; 0046ad02
    PUSH EBP                            ; 0046ad03
    MOV EBP,ESP                         ; 0046ad04
    SUB ESP,0xc                         ; 0046ad06
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0046ad0c
    PUSH EAX                            ; 0046ad0f
    MOV EAX,dword ptr [EBP + 0x24]      ; 0046ad10
    PUSH EAX                            ; 0046ad13
    CALL shape_design.c_wrapCoordinate_FUN_0046acc0 ; 0046ad14
        ;   XREF to: 0046acc0 (UNCONDITIONAL_CALL)  ; int shape_design.c_wrapCoordinate_FUN_0046acc0(int coordinate, int dimension)
    ADD ESP,0x8                         ; 0046ad19
    MOV dword ptr [EBP + 0x24],EAX      ; 0046ad1c
    MOV EAX,dword ptr [EBP + 0x20]      ; 0046ad1f
    PUSH EAX                            ; 0046ad22
    MOV EAX,dword ptr [EBP + 0x28]      ; 0046ad23
    PUSH EAX                            ; 0046ad26
    CALL shape_design.c_wrapCoordinate_FUN_0046acc0 ; 0046ad27
        ;   XREF to: 0046acc0 (UNCONDITIONAL_CALL)  ; int shape_design.c_wrapCoordinate_FUN_0046acc0(int coordinate, int dimension)
    ADD ESP,0x8                         ; 0046ad2c
    MOV dword ptr [EBP + 0x28],EAX      ; 0046ad2f
    MOV EAX,dword ptr [EBP + 0x28]      ; 0046ad32
    IMUL EAX,dword ptr [EBP + 0x1c]     ; 0046ad35
    MOV EDX,dword ptr [EBP + 0x24]      ; 0046ad39
    ADD EDX,EAX                         ; 0046ad3c
    MOV dword ptr [EBP + -0x4],EDX      ; 0046ad3e
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046ad41
    LEA EAX,[EAX + EAX*0x2]             ; 0046ad44
    MOV dword ptr [EBP + -0x8],EAX      ; 0046ad47
    MOV EDX,dword ptr [EBP + 0x14]      ; 0046ad4a
    ADD EDX,dword ptr [EBP + -0x8]      ; 0046ad4d
    XOR EAX,EAX                         ; 0046ad50
    MOV AL,byte ptr [EDX + 0x2]         ; 0046ad52
    MOV dword ptr [EBP + -0xc],EAX      ; 0046ad55
    FILD word ptr [EBP + -0xc]          ; 0046ad58
    FMUL double ptr [EBP + 0x2c]        ; 0046ad5b
    MOV EAX,dword ptr [EBP + 0x34]      ; 0046ad5e
    FADD double ptr [EAX]               ; 0046ad61
    FSTP double ptr [EAX]               ; 0046ad63
    MOV EDX,dword ptr [EBP + 0x14]      ; 0046ad65
    ADD EDX,dword ptr [EBP + -0x8]      ; 0046ad68
    XOR EAX,EAX                         ; 0046ad6b
    MOV AL,byte ptr [EDX + 0x1]         ; 0046ad6d
    MOV dword ptr [EBP + -0xc],EAX      ; 0046ad70
    FILD word ptr [EBP + -0xc]          ; 0046ad73
    FMUL double ptr [EBP + 0x2c]        ; 0046ad76
    MOV EAX,dword ptr [EBP + 0x38]      ; 0046ad79
    FADD double ptr [EAX]               ; 0046ad7c
    FSTP double ptr [EAX]               ; 0046ad7e
    MOV EDX,dword ptr [EBP + 0x14]      ; 0046ad80
    ADD EDX,dword ptr [EBP + -0x8]      ; 0046ad83
    XOR EAX,EAX                         ; 0046ad86
    MOV AL,byte ptr [EDX]               ; 0046ad88
    MOV dword ptr [EBP + -0xc],EAX      ; 0046ad8a
    FILD word ptr [EBP + -0xc]          ; 0046ad8d
    FMUL double ptr [EBP + 0x2c]        ; 0046ad90
    MOV EAX,dword ptr [EBP + 0x3c]      ; 0046ad93
    FADD double ptr [EAX]               ; 0046ad96
    FSTP double ptr [EAX]               ; 0046ad98
    MOV EDX,dword ptr [EBP + 0x18]      ; 0046ad9a
    ADD EDX,dword ptr [EBP + -0x4]      ; 0046ad9d
    XOR EAX,EAX                         ; 0046ada0
    MOV AL,byte ptr [EDX]               ; 0046ada2
    MOV dword ptr [EBP + -0xc],EAX      ; 0046ada4
    FILD word ptr [EBP + -0xc]          ; 0046ada7
    FMUL double ptr [EBP + 0x2c]        ; 0046adaa
    MOV EAX,dword ptr [EBP + 0x40]      ; 0046adad
    FADD double ptr [EAX]               ; 0046adb0
    FSTP double ptr [EAX]               ; 0046adb2
    MOV ESP,EBP                         ; 0046adb4
    POP EBP                             ; 0046adb6
    POP EDI                             ; 0046adb7
    POP ESI                             ; 0046adb8
    POP EBX                             ; 0046adb9
    RET                                 ; 0046adba

