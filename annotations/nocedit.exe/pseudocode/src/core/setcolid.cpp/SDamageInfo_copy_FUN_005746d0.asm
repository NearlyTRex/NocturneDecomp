; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_setcolid_cpp_SDamageInfo_copy_FUN_005746d0(SDamageInfo *this_ptr,SDamageInfo *other)
;
; Parameters:
; SDamageInfo *    Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   other
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005746d0
        ;   Label: core_setcolid.cpp_SDamageInfo_copy_FUN_005746d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005746d1
    MOV EDX,dword ptr [ESP + 0xc]       ; 005746d5
    MOV ECX,dword ptr [EDX]             ; 005746d9
    MOV dword ptr [EAX],ECX             ; 005746db
    FLD float ptr [EDX + 0x4]           ; 005746dd
    LEA ECX,[EAX + 0xc]                 ; 005746e0
    FSTP float ptr [EAX + 0x4]          ; 005746e3
    MOV EBX,dword ptr [EDX + 0x8]       ; 005746e6
    MOV dword ptr [EAX + 0x8],EBX       ; 005746e9
    LEA EAX,[EDX + 0xc]                 ; 005746ec
    MOV EBX,dword ptr [EAX]             ; 005746ef
    MOV dword ptr [ECX],EBX             ; 005746f1
    LEA EBX,[EAX + 0x4]                 ; 005746f3
    ADD ECX,0x4                         ; 005746f6
    MOV EBX,dword ptr [EBX]             ; 005746f9
    MOV dword ptr [ECX],EBX             ; 005746fb
    ADD ECX,0x4                         ; 005746fd
    MOV EAX,dword ptr [EAX + 0x8]       ; 00574700
    MOV dword ptr [ECX],EAX             ; 00574703
    LEA EAX,[ECX + -0x14]               ; 00574705
    FLD float ptr [EDX + 0x18]          ; 00574708
    LEA ECX,[EAX + 0x1c]                ; 0057470b
    FSTP float ptr [EAX + 0x18]         ; 0057470e
    LEA EAX,[EDX + 0x1c]                ; 00574711
    MOV EBX,dword ptr [EAX]             ; 00574714
    MOV dword ptr [ECX],EBX             ; 00574716
    LEA EBX,[EAX + 0x4]                 ; 00574718
    ADD ECX,0x4                         ; 0057471b
    MOV EBX,dword ptr [EBX]             ; 0057471e
    MOV dword ptr [ECX],EBX             ; 00574720
    ADD ECX,0x4                         ; 00574722
    MOV EAX,dword ptr [EAX + 0x8]       ; 00574725
    MOV dword ptr [ECX],EAX             ; 00574728
    LEA EAX,[ECX + -0x24]               ; 0057472a
    MOV ECX,dword ptr [EDX + 0x28]      ; 0057472d
    MOV dword ptr [EAX + 0x28],ECX      ; 00574730
    MOV ECX,dword ptr [EDX + 0x2c]      ; 00574733
    MOV dword ptr [EAX + 0x2c],ECX      ; 00574736
    MOV ECX,dword ptr [EDX + 0x30]      ; 00574739
    MOV dword ptr [EAX + 0x30],ECX      ; 0057473c
    MOV ECX,dword ptr [EDX + 0x34]      ; 0057473f
    MOV dword ptr [EAX + 0x34],ECX      ; 00574742
    MOV EDX,dword ptr [EDX + 0x38]      ; 00574745
    MOV dword ptr [EAX + 0x38],EDX      ; 00574748
    POP EBX                             ; 0057474b
    RET                                 ; 0057474c

