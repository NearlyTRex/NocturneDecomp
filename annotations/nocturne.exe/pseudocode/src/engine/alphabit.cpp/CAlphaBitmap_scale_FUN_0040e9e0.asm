; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040e9e0(CAlphaBitmap *this_ptr,int scaleFactorX,int scaleFactorY)
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
;   core_inv.cpp_loadAssets_FUN_004befa0 at 004bf13b
;   core_menu.cpp_FUN_004d23d0 at 004d241a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e9e0
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040e9e0
    PUSH ESI                            ; 0040e9e1
    PUSH EDI                            ; 0040e9e2
    PUSH EBP                            ; 0040e9e3
    SUB ESP,0x18                        ; 0040e9e4
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0040e9e7
    MOV EAX,dword ptr [ECX + 0xc]       ; 0040e9eb
    MOV EDX,EAX                         ; 0040e9ee
    MOV EBX,dword ptr [ESP + 0x30]      ; 0040e9f0
    SAR EDX,0x1f                        ; 0040e9f4
    IDIV EBX                            ; 0040e9f7
    MOV dword ptr [ESP + 0x8],EAX       ; 0040e9f9
    MOV EAX,dword ptr [ECX + 0x10]      ; 0040e9fd
    MOV EDX,EAX                         ; 0040ea00
    MOV ESI,dword ptr [ESP + 0x34]      ; 0040ea02
    SAR EDX,0x1f                        ; 0040ea06
    IDIV ESI                            ; 0040ea09
    XOR EDI,EDI                         ; 0040ea0b
    MOV dword ptr [ESP + 0x14],EDI      ; 0040ea0d
    MOV dword ptr [ESP + 0x4],EAX       ; 0040ea11
    TEST EAX,EAX                        ; 0040ea15
    JLE 0x0040ea90                      ; 0040ea17
        ;   XREF to: 0040ea90 (CONDITIONAL_JUMP)  ; LAB_0040ea90
    CMP dword ptr [ESP + 0x8],0x0       ; 0040ea1d
        ;   Label: LAB_0040ea1d
    JLE 0x0040ea7f                      ; 0040ea22
        ;   XREF to: 0040ea7f (CONDITIONAL_JUMP)  ; LAB_0040ea7f
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040ea24
    MOV ESI,dword ptr [ESP + 0x8]       ; 0040ea28
    IMUL EBX,ESI                        ; 0040ea2c
    MOV EDX,dword ptr [ESP + 0x30]      ; 0040ea2f
    MOV dword ptr [ESP + 0xc],EDX       ; 0040ea33
    IMUL EDX,EDX,0x0                    ; 0040ea37
    MOV EBP,dword ptr [ESP + 0xc]       ; 0040ea3a
    ADD ESI,EBX                         ; 0040ea3e
    MOV EAX,EBX                         ; 0040ea40
    MOV dword ptr [ESP + 0x10],ESI      ; 0040ea42
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040ea46
        ;   Label: LAB_0040ea46
    IMUL EBX,dword ptr [ECX + 0xc]      ; 0040ea4a
    IMUL EBX,dword ptr [ESP + 0x34]     ; 0040ea4e
    LEA ESI,[EBX + EDX*0x1]             ; 0040ea53
    MOV EBX,dword ptr [ECX]             ; 0040ea56
    LEA EDI,[EBX + ESI*0x1]             ; 0040ea58
    ADD EBX,EAX                         ; 0040ea5b
    MOV dword ptr [ESP],EBX             ; 0040ea5d
    MOV BL,byte ptr [EDI]               ; 0040ea60
    MOV EDI,dword ptr [ESP]             ; 0040ea62
    MOV byte ptr [EDI],BL               ; 0040ea65
    MOV EBX,dword ptr [ECX + 0x4]       ; 0040ea67
    LEA EDI,[EBX + ESI*0x1]             ; 0040ea6a
    LEA ESI,[EBX + EAX*0x1]             ; 0040ea6d
    MOV BL,byte ptr [EDI]               ; 0040ea70
    INC EAX                             ; 0040ea72
    MOV byte ptr [ESI],BL               ; 0040ea73
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040ea75
    ADD EDX,EBP                         ; 0040ea79
    CMP EAX,EBX                         ; 0040ea7b
    JL 0x0040ea46                       ; 0040ea7d
        ;   XREF to: 0040ea46 (CONDITIONAL_JUMP)  ; LAB_0040ea46
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040ea7f
        ;   Label: LAB_0040ea7f
    INC EAX                             ; 0040ea83
    MOV EDX,dword ptr [ESP + 0x4]       ; 0040ea84
    MOV dword ptr [ESP + 0x14],EAX      ; 0040ea88
    CMP EAX,EDX                         ; 0040ea8c
    JL 0x0040ea1d                       ; 0040ea8e
        ;   XREF to: 0040ea1d (CONDITIONAL_JUMP)  ; LAB_0040ea1d
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040ea90
        ;   Label: LAB_0040ea90
    MOV dword ptr [ECX + 0xc],EAX       ; 0040ea94
    MOV EAX,dword ptr [ESP + 0x4]       ; 0040ea97
    MOV dword ptr [ECX + 0x10],EAX      ; 0040ea9b
    ADD ESP,0x18                        ; 0040ea9e
    POP EBP                             ; 0040eaa1
    POP EDI                             ; 0040eaa2
    POP ESI                             ; 0040eaa3
    POP EBX                             ; 0040eaa4
    RET                                 ; 0040eaa5

