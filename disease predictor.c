#include <stdio.h>

int main() {

int choice;



printf("-------- Symptom/Disease to Remedy Checker --------\n");

printf("Enter the number for your symptom, and I will predict the most likely disease you may have.:\n\n");



printf("1. Loose Motion\n2. Cold\n3. Cough\n4. Indigestion\n5. Acidity\n");

printf("6. Vomiting\n7. Mild Fever\n8. Constipation\n9. Headache\n10. Toothache\n");

printf("11. Muscle Cramp\n12. Nosebleed\n13. Minor Burn\n14. Gas/Bloating\n15. Ear Pain\n16. Eye Irritation\n");

printf("17. Typhoid\n18. Pneumonia\n19. Common Cold (Virus)\n20. Malaria\n21. Amoebiasis\n");

printf("22. Ascariasis\n23. Elephantiasis\n24. Ringworm\n");



printf("\nEnter your choice (1–24): ");

scanf("%d", &choice);



printf("\n--- Remedy & Info ---\n");



switch (choice) {

    case 1:

        printf("Name: Loose Motion\n");

        printf("Caused by: Infection or contaminated food\n");

        printf("Symptoms: Frequent watery stools, dehydration\n");

        printf("Remedy: Use ORS, eat curd rice, and banana.\n");

        break;

    case 2:

        printf("Name: Cold\n");

        printf("Caused by: Viral infection\n");

        printf("Symptoms: Runny nose, sneezing, sore throat\n");

        printf("Remedy: Steam inhalation and Tulsi-Ginger tea.\n");

        break;

    case 3:

        printf("Name: Cough\n");

        printf("Caused by: Infection, allergies, throat irritation\n");

        printf("Symptoms: Dry or wet cough, throat irritation\n");

        printf("Remedy: Honey with warm water and turmeric.\n");

        break;

    case 4:

        printf("Name: Indigestion\n");

        printf("Caused by: Overeating, oily food\n");

        printf("Symptoms: Bloating, stomach pain, gas\n");

        printf("Remedy: Drink jeera (cumin) water, walk after meals.\n");

        break;

    case 5:

        printf("Name: Acidity\n");

        printf("Caused by: Spicy food, stress, overeating\n");

        printf("Symptoms: Burning chest pain, acid reflux\n");

        printf("Remedy: Drink cold milk or eat banana. Avoid spicy food.\n");

        break;

    case 6:

        printf("Name: Vomiting\n");

        printf("Caused by: Food poisoning, infection, motion sickness\n");

        printf("Symptoms: Nausea, stomach discomfort\n");

        printf("Remedy: Ginger juice with salt or lemon water.\n");

        break;

    case 7:

        printf("Name: Mild Fever\n");

        printf("Caused by: Viral infection or inflammation\n");

        printf("Symptoms: Slight rise in body temperature, weakness\n");

        printf("Remedy: Wet cloth on forehead, paracetamol, rest.\n");

        break;

    case 8:

        printf("Name: Constipation\n");

        printf("Caused by: Low fiber diet, less water intake\n");

        printf("Symptoms: Difficulty in passing stool\n");

        printf("Remedy: Drink warm water, eat soaked raisins or prunes.\n");

        break;

    case 9:

        printf("Name: Headache\n");

        printf("Caused by: Stress, lack of sleep, dehydration\n");

        printf("Symptoms: Pain in head or forehead\n");

        printf("Remedy: Rest in a dark room, drink ginger tea.\n");

        break;

    case 10:

        printf("Name: Toothache\n");

        printf("Caused by: Cavity, infection, gum disease\n");

        printf("Symptoms: Sharp or throbbing pain in teeth\n");

        printf("Remedy: Apply clove oil gently on the tooth.\n");

        break;

    case 11:

        printf("Name: Muscle Cramp\n");

        printf("Caused by: Dehydration or overuse of muscle\n");

        printf("Symptoms: Sudden tightness or pain in muscle\n");

        printf("Remedy: Massage and apply warm compress.\n");

        break;

    case 12:

        printf("Name: Nosebleed\n");

        printf("Caused by: Dry climate, nose picking, injury\n");

        printf("Symptoms: Blood from nose\n");

        printf("Remedy: Sit, lean forward, pinch nose for 5–10 mins.\n");

        break;

    case 13:

        printf("Name: Minor Burn\n");

        printf("Caused by: Hot objects or steam\n");

        printf("Symptoms: Redness, pain, blisters\n");

        printf("Remedy: Run under cool water, apply aloe vera gel.\n");

        break;

    case 14:

        printf("Name: Gas / Bloating\n");

        printf("Caused by: Indigestion, swallowing air\n");

        printf("Symptoms: Stomach tightness, burping\n");

        printf("Remedy: Hing water or jeera-ajwain tea.\n");

        break;

    case 15:

        printf("Name: Ear Pain\n");

        printf("Caused by: Infection, wax, injury\n");

        printf("Symptoms: Pain or fullness in ear\n");

        printf("Remedy: Warm garlic oil (if no discharge), or consult doctor.\n");

        break;

    case 16:

        printf("Name: Eye Irritation\n");

        printf("Caused by: Dust, allergy, foreign object\n");

        printf("Symptoms: Redness, watering, itchiness\n");

        printf("Remedy: Wash with cold water, use cucumber slices.\n");

        break;

    case 17:

        printf("Name: Typhoid\n");

        printf("Caused by: Bacteria – Salmonella typhi\n");

        printf("Symptoms: High fever, weakness, stomach pain\n");

        printf("Remedy: Antibiotics. Confirm with Widal test. Hydrate well.\n");

        break;

    case 18:

        printf("Name: Pneumonia\n");

        printf("Caused by: Bacteria – Streptococcus or Haemophilus\n");

        printf("Symptoms: Cough, fever, chest pain, breathing difficulty\n");

        printf("Remedy: Immediate antibiotics. Hospital care may be needed.\n");

        break;

    case 19:

        printf("Name: Common Cold\n");

        printf("Caused by: Rhinovirus\n");

        printf("Symptoms: Runny nose, sneezing, mild fever\n");

        printf("Remedy: Steam inhalation, fluids, rest.\n");

        break;

    case 20:

        printf("Name: Malaria\n");

        printf("Caused by: Parasite – Plasmodium (via mosquito)\n");

        printf("Symptoms: Cyclic fever, chills, sweating\n");

        printf("Remedy: Blood test confirmation. Antimalarial drugs needed.\n");

        break;

    case 21:

        printf("Name: Amoebiasis\n");

        printf("Caused by: Parasite – Entamoeba histolytica\n");

        printf("Symptoms: Stomach pain, loose stool with mucus\n");

        printf("Remedy: Safe water, antiparasitic medication, avoid street food.\n");

        break;

    case 22:

        printf("Name: Ascariasis\n");

        printf("Caused by: Roundworm (Ascaris lumbricoides)\n");

        printf("Symptoms: Belly pain, worm in stool, weakness\n");

        printf("Remedy: Deworming tablets like albendazole.\n");

        break;

    case 23:

        printf("Name: Elephantiasis\n");

        printf("Caused by: Filarial worms via mosquito bite\n");

        printf("Symptoms: Swelling in legs, thickened skin\n");

        printf("Remedy: Antiparasitic treatment, hygiene, mosquito control.\n");

        break;

    case 24:

        printf("Name: Ringworm\n");

        printf("Caused by: Fungal infection (Dermatophytes)\n");

        printf("Symptoms: Itchy, red, scaly skin patches\n");

        printf("Remedy: Apply antifungal cream. Avoid sharing clothes.\n");

        break;

    default:

        printf("Invalid input. Please enter a number between 1 and 24.\n");

}



return 0;

}

