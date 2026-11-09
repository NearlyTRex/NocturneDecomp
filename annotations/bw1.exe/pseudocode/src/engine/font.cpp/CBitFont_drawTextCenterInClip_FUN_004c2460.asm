; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_drawTextCenterInClip_FUN_004c2460(CBitFont *this_ptr,int y,int color_mode,int color_value,char *text)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   color_mode
; int              Stack[0x10]:4   color_value
; char *           Stack[0x14]:4   text
;
; XREF[1]:
;   engine_font.cpp_CBitFont_printCenterFV_FUN_004c2500 at 004c254a
;
; Referenced Globals:
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f010
;
; Called Functions:
;   engine_font.cpp_FUN_004c2060
;   engine_font.cpp_FUN_004c3ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c2460
        ;   Label: engine_font.cpp_CBitFont_drawTextCenterInClip_FUN_004c2460
    PUSH ESI                            ; 004c2461
    PUSH EDI                            ; 004c2462
    PUSH EBP                            ; 004c2463
    MOV EDX,dword ptr [ESP + 0x24]      ; 004c2464
    PUSH EDX                            ; 004c2468
    MOV ECX,dword ptr [ESP + 0x24]      ; 004c2469
    PUSH ECX                            ; 004c246d
    MOV EBX,dword ptr [ESP + 0x24]      ; 004c246e
    PUSH EBX                            ; 004c2472
    MOV ESI,dword ptr [ESP + 0x24]      ; 004c2473
    PUSH ESI                            ; 004c2477
    MOV EBP,dword ptr [ESP + 0x24]      ; 004c2478
    PUSH EDX                            ; 004c247c
    MOV EDI,dword ptr [0x01c4f010]      ; 004c247d | DAT_01c4f010
    MOV EBX,dword ptr [0x01c4f008]      ; 004c2483 | DAT_01c4f008
    PUSH EBP                            ; 004c2489
    ADD EBX,EDI                         ; 004c248a
    CALL engine_font.cpp_FUN_004c3ea0   ; 004c248c
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    LEA EDX,[EBX + 0x1]                 ; 004c2491
    SUB EDX,EAX                         ; 004c2494
    MOV EAX,EDX                         ; 004c2496
    SAR EDX,0x1f                        ; 004c2498
    SUB EAX,EDX                         ; 004c249b
    SAR EAX,0x1                         ; 004c249d
    ADD ESP,0x8                         ; 004c249f
    PUSH EAX                            ; 004c24a2
    PUSH EBP                            ; 004c24a3
    CALL engine_font.cpp_FUN_004c2060   ; 004c24a4
        ;   XREF to: 004c2060 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004c2060(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x18                        ; 004c24a9
    POP EBP                             ; 004c24ac
    POP EDI                             ; 004c24ad
    POP ESI                             ; 004c24ae
    POP EBX                             ; 004c24af
    RET                                 ; 004c24b0

