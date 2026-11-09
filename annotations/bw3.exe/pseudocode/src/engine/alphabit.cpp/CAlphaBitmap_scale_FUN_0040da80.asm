; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040da80(CAlphaBitmap *this_ptr,int scaleFactorX,int scaleFactorY)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   scaleFactorX
; int              Stack[0xc]:4   scaleFactorY
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_inv.cpp_loadAssets_FUN_004da570 at 004da778
;   core_menu.cpp_FUN_004ea4d0 at 004ea51a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040da80
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040da80
    PUSH ESI                            ; 0040da81
    PUSH EDI                            ; 0040da82
    PUSH EBP                            ; 0040da83
    SUB ESP,0x18                        ; 0040da84
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0040da87
    MOV EAX,dword ptr [ECX + 0xc]       ; 0040da8b
    MOV EDX,EAX                         ; 0040da8e
    MOV EBX,dword ptr [ESP + 0x30]      ; 0040da90
    SAR EDX,0x1f                        ; 0040da94
    IDIV EBX                            ; 0040da97
    MOV dword ptr [ESP + 0x8],EAX       ; 0040da99
    MOV EAX,dword ptr [ECX + 0x10]      ; 0040da9d
    MOV EDX,EAX                         ; 0040daa0
    MOV ESI,dword ptr [ESP + 0x34]      ; 0040daa2
    SAR EDX,0x1f                        ; 0040daa6
    IDIV ESI                            ; 0040daa9
    XOR EDI,EDI                         ; 0040daab
    MOV dword ptr [ESP + 0x14],EDI      ; 0040daad
    MOV dword ptr [ESP + 0x4],EAX       ; 0040dab1
    TEST EAX,EAX                        ; 0040dab5
    JLE 0x0040db30                      ; 0040dab7
        ;   XREF to: 0040db30 (CONDITIONAL_JUMP)  ; LAB_0040db30
    CMP dword ptr [ESP + 0x8],0x0       ; 0040dabd
        ;   Label: LAB_0040dabd
    JLE 0x0040db1f                      ; 0040dac2
        ;   XREF to: 0040db1f (CONDITIONAL_JUMP)  ; LAB_0040db1f
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040dac4
    MOV ESI,dword ptr [ESP + 0x8]       ; 0040dac8
    IMUL EBX,ESI                        ; 0040dacc
    MOV EDX,dword ptr [ESP + 0x30]      ; 0040dacf
    MOV dword ptr [ESP + 0xc],EDX       ; 0040dad3
    IMUL EDX,EDX,0x0                    ; 0040dad7
    MOV EBP,dword ptr [ESP + 0xc]       ; 0040dada
    ADD ESI,EBX                         ; 0040dade
    MOV EAX,EBX                         ; 0040dae0
    MOV dword ptr [ESP + 0x10],ESI      ; 0040dae2
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040dae6
        ;   Label: LAB_0040dae6
    IMUL EBX,dword ptr [ECX + 0xc]      ; 0040daea
    IMUL EBX,dword ptr [ESP + 0x34]     ; 0040daee
    LEA ESI,[EBX + EDX*0x1]             ; 0040daf3
    MOV EBX,dword ptr [ECX]             ; 0040daf6
    LEA EDI,[EBX + ESI*0x1]             ; 0040daf8
    ADD EBX,EAX                         ; 0040dafb
    MOV dword ptr [ESP],EBX             ; 0040dafd
    MOV BL,byte ptr [EDI]               ; 0040db00
    MOV EDI,dword ptr [ESP]             ; 0040db02
    MOV byte ptr [EDI],BL               ; 0040db05
    MOV EBX,dword ptr [ECX + 0x4]       ; 0040db07
    LEA EDI,[EBX + ESI*0x1]             ; 0040db0a
    LEA ESI,[EBX + EAX*0x1]             ; 0040db0d
    MOV BL,byte ptr [EDI]               ; 0040db10
    INC EAX                             ; 0040db12
    MOV byte ptr [ESI],BL               ; 0040db13
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040db15
    ADD EDX,EBP                         ; 0040db19
    CMP EAX,EBX                         ; 0040db1b
    JL 0x0040dae6                       ; 0040db1d
        ;   XREF to: 0040dae6 (CONDITIONAL_JUMP)  ; LAB_0040dae6
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040db1f
        ;   Label: LAB_0040db1f
    INC EAX                             ; 0040db23
    MOV EDX,dword ptr [ESP + 0x4]       ; 0040db24
    MOV dword ptr [ESP + 0x14],EAX      ; 0040db28
    CMP EAX,EDX                         ; 0040db2c
    JL 0x0040dabd                       ; 0040db2e
        ;   XREF to: 0040dabd (CONDITIONAL_JUMP)  ; LAB_0040dabd
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040db30
        ;   Label: LAB_0040db30
    MOV dword ptr [ECX + 0xc],EAX       ; 0040db34
    MOV EAX,dword ptr [ESP + 0x4]       ; 0040db37
    MOV dword ptr [ECX + 0x10],EAX      ; 0040db3b
    ADD ESP,0x18                        ; 0040db3e
    POP EBP                             ; 0040db41
    POP EDI                             ; 0040db42
    POP ESI                             ; 0040db43
    POP EBX                             ; 0040db44
    RET                                 ; 0040db45

