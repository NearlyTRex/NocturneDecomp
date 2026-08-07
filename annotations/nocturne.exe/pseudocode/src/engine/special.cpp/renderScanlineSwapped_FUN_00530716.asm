; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_renderScanlineSwapped_FUN_00530716(int scanline_y,SHardwareEdge *right,SHardwareEdge *left)
;
; Parameters:
; int              Stack[0x4]:4   scanline_y
; SHardwareEdge *  Stack[0x8]:4   right
; SHardwareEdge *  Stack[0xc]:4   left
;
; Referenced Globals:
;   undefined4 DAT_005bf4a4
;   undefined4 DAT_005bf4a8
;   undefined4 DAT_005bf4ac
;   undefined4 DAT_005bf4b0
;   MainScanlineFunc* g_ScanlineRenderFunc
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00530716
        ;   Label: engine_special.cpp_renderScanlineSwapped_FUN_00530716
    MOV EBP,ESP                         ; 00530717
    PUSH ESI                            ; 00530719
    PUSH EDI                            ; 0053071a
    MOV [0x005bf4a4],EAX                ; 0053071b | DAT_005bf4a4
    MOV dword ptr [0x005bf4a8],EBX      ; 00530720 | DAT_005bf4a8
    MOV dword ptr [0x005bf4ac],ECX      ; 00530726 | DAT_005bf4ac
    MOV dword ptr [0x005bf4b0],EDX      ; 0053072c | DAT_005bf4b0
    MOV EBX,dword ptr [EBP + 0x8]       ; 00530732
    MOV ESI,dword ptr [EBP + 0xc]       ; 00530735
    MOV EDI,dword ptr [EBP + 0x10]      ; 00530738
    CALL dword ptr [0x01c00c7c]         ; 0053073b | g_ScanlineRenderFunc
    MOV EAX,[0x005bf4a4]                ; 00530741 | DAT_005bf4a4
    MOV EBX,dword ptr [0x005bf4a8]      ; 00530746 | DAT_005bf4a8
    MOV ECX,dword ptr [0x005bf4ac]      ; 0053074c | DAT_005bf4ac
    MOV EDX,dword ptr [0x005bf4b0]      ; 00530752 | DAT_005bf4b0
    POP EDI                             ; 00530758
    POP ESI                             ; 00530759
    LEAVE                               ; 0053075a
    RET                                 ; 0053075b

